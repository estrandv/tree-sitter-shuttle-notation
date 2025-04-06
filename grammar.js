/**
 * @file Tree sitter for shuttle notation
 * @author estrandv <emil.strandvik@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tree_sitter_shuttle_notation",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
