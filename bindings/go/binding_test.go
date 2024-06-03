package tree_sitter_bru_test

import (
	"context"
	"testing"

	tree_sitter_bru "github.com/pedrobarco/tree-sitter-bru/bindings/go"
	sitter "github.com/smacker/go-tree-sitter"
)

func TestGrammar(t *testing.T) {
	lang := tree_sitter_bru.GetLanguage()

	n, err := sitter.ParseCtx(context.Background(), []byte("meta { \n\ttype: http \n}"), lang)
	if err != nil {
		t.Fatalf("Error parsing: %s", err)
	}

	expected := "(document (meta (keyword) (dictionary (pair (key) (value)))))"
	if n.String() != expected {
		t.Fatalf("Expected root node to be '%s', got '%s'", expected, n)
	}
}
