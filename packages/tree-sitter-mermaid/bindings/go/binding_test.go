package tree_sitter_mermaid_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mermaid "github.com/monaqa/tree-sitter-mermaid/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mermaid.Language())
	if language == nil {
		t.Errorf("Error loading Mermaid grammar")
	}
}
