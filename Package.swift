// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterShuttleNotation",
    products: [
        .library(name: "TreeSitterShuttleNotation", targets: ["TreeSitterShuttleNotation"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterShuttleNotation",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterShuttleNotationTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterShuttleNotation",
            ],
            path: "bindings/swift/TreeSitterShuttleNotationTests"
        )
    ],
    cLanguageStandard: .c11
)
