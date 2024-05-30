package tree_sitter_bru_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-bru"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bru.Language())
	if language == nil {
		t.Errorf("Error loading Bru grammar")
	}
}
