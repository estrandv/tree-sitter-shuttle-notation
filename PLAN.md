# Tree-sitter Shuttle & Billboard Implementation Plan

## Overview
Create two separate tree-sitter parser packages:
1. **tree-sitter-shuttle-notation** - Standalone Shuttle parser (current repo)
2. **tree-sitter-billboard-notation** - Billboard parser with Shuttle injection (new repo)

## Current State Analysis

### Current Repository
- Name: `tree-sitter-shuttle-notation`
- Status: Basic Shuttle grammar implemented but incomplete
- Missing features per TODOs in grammar.js:
  - `*` repetition operator support
  - `.` as valid prefix
  - Section suffixes
  - Argument operators (+, -, *, =)
  - Argument references (e.g., `sus0.5time`)
  - Nested section argument highlighting issues

### Shuttle Notation Requirements (from LANGUAGE_SPEC.md)
- Atomic elements: `[prefix][index][suffix][*repetition][:args]`
- Sections: `([content])[suffix][*repetition][:args]`
- Alternations: `(a / b / c)` with cycling behavior
- Arguments: Named parameters with operators and references
- Inheritance: Arguments cascade through nested structures

### Billboard Notation Requirements (from BILLBOARD_SPEC.md)
- Line-based parsing with 7 line types
- Group filters: `>>> group1 group2`
- Synth headers: `@instrument:group args`
- Track definitions: `[<metadata>] shuttle_sequence`
- Effect definitions: `€type:id args`
- Commands: `COMMAND /address args`
- Default statements: `DEFAULT args`
- Comments: `# text`

## Recommended Approach: Option 3

### Phase 1: Complete Shuttle Grammar (Current Repo)
**Timeline: First priority**

#### 1.1 Repository Cleanup
- Keep current name or rename to `tree-sitter-shuttle-notation`
- Update package.json metadata
- Update tree-sitter.json metadata

#### 1.2 Grammar Improvements (grammar.js)

**1.2.1 Repetition Operator**
- Add `repetition` rule: `*` followed by number
- Apply to both `raw_note` and `bracket_section`
- Examples: `a*3`, `(a b)*2`

**1.2.2 Section Suffixes**
- Add `section_suffix` rule (identifier after closing paren)
- Update `bracket_section` to include optional suffix
- Example: `(a b)sus:amp0.5`

**1.2.3 Argument Operators**
- Add `arg_operator` rule: `+`, `-`, `*`, `=`
- Update `arg` rule to include optional operator before value
- Example: `amp+0.2`, `amp*2`, `amp=0.5`

**1.2.4 Argument References**
- Update `arg` rule to allow identifier after value
- Add `arg_reference` rule (identifier referencing another arg)
- Example: `sus0.5time` (sus = 0.5 * time)

**1.2.5 Special Elements**
- Allow `x` and `.` as standalone elements (no index required)
- Update `raw_note` to make all parts optional
- Add validation that at least one part exists

**1.2.6 Precedence Fixes**
- Review and adjust precedence values for nested sections
- Ensure argument highlighting works in deeply nested structures

#### 1.3 Testing
- Create test corpus in `test/corpus/`
- Cover all Shuttle notation features from spec
- Test edge cases: empty sections, nested alternations, etc.

#### 1.4 Syntax Highlighting
- Update `queries/highlights.scm`
- Add scopes for new grammar elements
- Test in editors (VSCode, Zed, Neovim)

### Phase 2: Create Billboard Grammar (New Repo)
**Timeline: After Phase 1 complete**

#### 2.1 Repository Setup
- Create new repo: `tree-sitter-billboard-notation`
- Run `tree-sitter init` with Billboard metadata
- Set up standard tree-sitter project structure

#### 2.2 Grammar Design (grammar.js)

**2.2.1 Top-Level Structure**
```javascript
rules: {
  source_file: $ => repeat($._line),
  _line: $ => choice(
    $.comment,
    $.group_filter,
    $.synth_header,
    $.track_definition,
    $.effect_definition,
    $.command,
    $.default_statement,
    $.blank_line
  ),
}
```

**2.2.2 Line Type Rules**
- `comment`: `#` followed by text to EOL
- `group_filter`: `>>>` followed by space-separated identifiers
- `synth_header`: `[@|*@]instrument[:group] [args] [config]`
- `track_definition`: `[<metadata>] shuttle_content`
- `effect_definition`: `€type:id [args]`
- `command`: `[COMMAND_TYPE] /address [args]`
- `default_statement`: `DEFAULT args`

**2.2.3 Shuttle Integration Strategy**

**Option A: Injection (Recommended)**
- Define `shuttle_content` as opaque string in Billboard grammar
- Use `queries/injections.scm` to inject Shuttle parser
- Injection query example:
  ```scheme
  ((track_definition
    content: (shuttle_content) @injection.content)
   (#set! injection.language "shuttle"))
  ```

**Option B: External Scanner**
- Implement external scanner in C to delegate to Shuttle parser
- More complex but gives finer control

**Option C: Inline Grammar**
- Copy Shuttle rules into Billboard grammar
- Not recommended: duplicates code, harder to maintain

#### 2.3 Metadata Parsing
- Parse track metadata: `<group_override[;arg_override]>`
- Parse synth header components
- Parse effect parameters
- Handle line continuations with `\`

#### 2.4 Testing
- Create test corpus for all Billboard line types
- Test Shuttle injection in track definitions
- Test complex multi-section files

#### 2.5 Dependencies
- Add Shuttle parser as dependency in package.json
- Document injection setup for users

### Phase 3: Integration & Documentation
**Timeline: After Phase 2 complete**

#### 3.1 Cross-Testing
- Test Billboard files with complex Shuttle sequences
- Verify syntax highlighting across grammar boundaries
- Test in multiple editors

#### 3.2 Documentation
- Update README for both repos
- Document grammar rules and design decisions
- Provide usage examples for each language
- Document injection setup for Billboard

#### 3.3 Editor Integration
- Create/update VSCode extension
- Create/update Zed extension
- Provide Neovim configuration examples

## Technical Decisions to Make

### Decision 1: Shuttle Repo Naming
- **Option B**: Use `tree-sitter-shuttle-notation` (current)
- **Option B**: Rename to `tree-sitter-shuttle-notation` (cleaner)
- **Recommendation**: Option B

### Decision 2: Billboard Injection Method
- **Option A**: Use tree-sitter injection queries (standard approach)
- **Option B**: External scanner (more control, more complex)
- **Option C**: Inline grammar (not recommended)
- **Recommendation**: Option A

### Decision 3: Argument Parsing Depth
- **Option A**: Parse argument structure fully (operators, references)
- **Option B**: Parse arguments as opaque strings
- **Recommendation**: Option A for Shuttle, Option B for Billboard (delegate to Shuttle)

### Decision 4: Testing Strategy
- **Option A**: Comprehensive test corpus for both grammars
- **Option B**: Basic tests, rely on manual testing
- **Recommendation**: Option A

## Risks & Mitigations

### Risk 1: Injection Complexity
- **Risk**: Tree-sitter injection might not work as expected
- **Mitigation**: Test early, have external scanner as backup plan

### Risk 2: Grammar Ambiguity
- **Risk**: Shuttle grammar might have ambiguous cases
- **Mitigation**: Use precedence carefully, add explicit rules

### Risk 3: Performance
- **Risk**: Complex nested structures might be slow to parse
- **Mitigation**: Profile with large files, optimize if needed

### Risk 4: Maintenance Burden
- **Risk**: Two repos to maintain and keep in sync
- **Mitigation**: Good documentation, automated testing, semantic versioning

## Success Criteria

### Phase 1 Success
- [ ] All Shuttle notation features from spec are supported
- [ ] Test corpus passes 100%
- [ ] Syntax highlighting works in at least one editor
- [ ] No known parsing bugs

### Phase 2 Success
- [ ] All Billboard line types parse correctly
- [ ] Shuttle injection works for track content
- [ ] Test corpus passes 100%
- [ ] Syntax highlighting works across grammar boundaries

### Phase 3 Success
- [ ] Both parsers published to npm/crates.io
- [ ] Documentation complete
- [ ] At least one editor extension available
- [ ] Community can use and extend both grammars

## Next Steps

1. **Get approval on this plan**
2. **Decide on naming (Decision 1)**
3. **Start Phase 1.2: Grammar Improvements**
4. **Iterate based on testing**

## Questions for Discussion

1. Do you want to rename the current repo?
2. Should we aim for 100% spec compliance or MVP first?
3. Do you have preference for injection vs external scanner?
4. What editors are priority for testing?
5. Any other requirements not covered in the specs?
