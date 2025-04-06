from unittest import TestCase

import tree_sitter
import tree_sitter_tree_sitter_shuttle_notation


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_tree_sitter_shuttle_notation.language())
        except Exception:
            self.fail("Error loading Shuttle Notation Tree Sitter grammar")
