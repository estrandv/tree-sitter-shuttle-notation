import XCTest
import SwiftTreeSitter
import TreeSitterTreeSitterShuttleNotation

final class TreeSitterTreeSitterShuttleNotationTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tree_sitter_shuttle_notation())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Shuttle Notation Tree Sitter grammar")
    }
}
