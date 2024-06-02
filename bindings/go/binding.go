package tree_sitter_bru

// #include "parser.h"
// TSLanguage *tree_sitter_bru();
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

// Get the tree-sitter Language for this grammar.
func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_bru())
	return sitter.NewLanguage(ptr)
}
