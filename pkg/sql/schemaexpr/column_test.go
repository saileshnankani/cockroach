// Copyright 2020 The Cockroach Authors.
//
// Use of this software is governed by the Business Source License
// included in the file licenses/BSL.txt.
//
// As of the Change Date specified in that file, in accordance with
// the Business Source License, use of this software will be governed
// by the Apache License, Version 2.0, included in the file
// licenses/APL.txt.

package schemaexpr

import (
	"context"
	"testing"

	"github.com/cockroachdb/cockroach/pkg/sql/parser"
	"github.com/cockroachdb/cockroach/pkg/sql/sem/tree"
	"github.com/cockroachdb/cockroach/pkg/sql/sqlbase"
	"github.com/cockroachdb/cockroach/pkg/sql/types"
)

func TestDequalifyColumnRefs(t *testing.T) {
	ctx := context.Background()

	database := tree.Name("foo")
	table := tree.Name("bar")
	tn := tree.MakeTableName(database, table)

	cols := []sqlbase.ColumnDescriptor{
		{Name: "a", Type: types.Int},
		{Name: "b", Type: types.String},
	}

	testData := []struct {
		expr     string
		expected string
	}{
		{"a", "a"},
		{"bar.a", "a"},
		{"foo.bar.a", "a"},
		{"a > 0", "a > 0"},
		{"bar.a > 0", "a > 0"},
		{"foo.bar.a > 0", "a > 0"},
		{"a > 0 AND b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"bar.a > 0 AND bar.b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"foo.bar.a > 0 AND foo.bar.b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"bar.a > 0 AND b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"foo.bar.a > 0 AND b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"a > 0 AND bar.b = 'baz'", "(a > 0) AND (b = 'baz')"},
		{"a > 0 AND foo.bar.b = 'baz'", "(a > 0) AND (b = 'baz')"},
	}

	for _, d := range testData {
		t.Run(d.expr, func(t *testing.T) {
			expr, err := parser.ParseExpr(d.expr)
			if err != nil {
				t.Fatalf("%s: unexpected error: %s", d.expr, err)
			}

			source := sqlbase.NewSourceInfoForSingleTable(
				tn, sqlbase.ResultColumnsFromColDescs(
					sqlbase.ID(1),
					cols,
				),
			)

			r, err := DequalifyColumnRefs(ctx, source, expr)
			if err != nil {
				t.Fatalf("%s: expected success, but found error: %s", d.expr, err)
			}

			s := tree.Serialize(r)
			if s != d.expected {
				t.Errorf("%s: expected %q, got %q", d.expr, d.expected, s)
			}
		})
	}
}
