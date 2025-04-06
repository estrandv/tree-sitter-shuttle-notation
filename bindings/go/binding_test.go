package tree_sitter_tree_sitter_shuttle_notation_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tree_sitter_shuttle_notation "github.com/estrandv/tree-sitter-shuttle-notation/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tree_sitter_shuttle_notation.Language())
	if language == nil {
		t.Errorf("Error loading Shuttle Notation Tree Sitter grammar")
	}
}
