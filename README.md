# tinyC Compiler

**A grammar-driven compiler front end for a subset of C, built with Flex and GNU Bison.**

`tinyC Compiler` implements lexical analysis and syntax analysis for a subset of the C programming language inspired by the ISO/IEC 9899:1999 (C99) grammar. It combines a Flex-based lexer with a Bison-based parser to recognize language constructs, from arithmetic expressions and declarations to control-flow statements and function definitions.

The project demonstrates the fundamental building blocks of compiler construction through a modular, grammar-driven implementation.

## Overview

A compiler front end transforms a source program into a structured sequence of tokens and checks whether those tokens conform to the language grammar.

This project implements two core stages:

* **Lexical Analysis:** Identifies keywords, identifiers, constants, operators, punctuation, and other language tokens using Flex.
* **Syntax Analysis:** Validates the syntactic structure of the input program using a context-free grammar specified in GNU Bison.

The lexer and parser are integrated through generated C source files and a shared token interface, with a Makefile automating the build process.

## Architecture

```text
             tinyC Source Code
                     |
                     v
          +--------------------+
          |   Flex Lexer       |
          |   lexer.l          |
          +--------------------+
                     |
                     v
             Token Stream
                     |
                     v
          +--------------------+
          |   Bison Parser     |
          |   parser.y         |
          +--------------------+
                     |
                     v
          Syntax Validation
                     |
              +------+------+
              |             |
              v             v
          Accepted       Rejected
          Input          Input
```

## Features

* **C99-inspired grammar:** Implements a defined subset of C language constructs.
* **Expression parsing:** Supports arithmetic, relational, equality, bitwise, logical, conditional, and assignment expressions.
* **Declaration parsing:** Covers type specifiers, storage-class specifiers, qualifiers, declarators, initializers, and enumeration declarations within the supported grammar.
* **Statement parsing:** Includes compound statements, conditional branches, loops, switch statements, labels, and jump statements.
* **Function definitions:** Recognizes function declarations and definitions, including parameter lists.
* **Lexer-parser integration:** Uses generated token definitions to connect lexical and syntactic analysis.
* **Automated builds:** Uses Make to generate and compile the lexer and parser.
* **Modular implementation:** Keeps lexical rules, grammar productions, and build instructions separate.

## Language Coverage

The parser follows a subset of the C99 phrase-structure grammar.

| Category                               | Supported constructs                                                       |
| -------------------------------------- | -------------------------------------------------------------------------- |
| Primary expressions                    | Identifiers, constants, string literals, parenthesized expressions         |
| Postfix expressions                    | Array subscripting, function calls, member access, increment and decrement |
| Unary and cast expressions             | Unary operators, `sizeof`, type casts                                      |
| Arithmetic expressions                 | `*`, `/`, `%`, `+`, `-`                                                    |
| Comparison expressions                 | `<`, `>`, `<=`, `>=`, `==`, `!=`                                           |
| Bitwise and logical expressions        | `&`, `^`, `\|`, `&&`, `\|\|`, shifts                                       |
| Conditional and assignment expressions | `?:`, `=`, compound assignment operators                                   |
| Declarations                           | Type and storage specifiers, pointers, declarators, initializers           |
| Statements                             | Blocks, `if-else`, `switch`, loops, `break`, `continue`, `goto`, `return`  |
| External definitions                   | Declarations and function definitions                                      |

**Scope note:** This is a subset implementation, not a complete or standards-conforming C99 compiler. Actual acceptance depends on the productions and token rules implemented in the source files.

## Technology Stack

* **C** — implementation language for the generated lexer and parser.
* **Flex** — lexical analyzer generator.
* **GNU Bison** — parser generator.
* **GNU Make** — build automation.

## Project Structure

A typical repository layout is shown below. Adjust the filenames to match the actual files in your implementation.

```text
tinyc-compiler/
├── lexer.l          # Flex lexical rules
├── parser.y         # Bison grammar specification
├── Makefile         # Build and cleanup rules
├── y.tab.h          # Generated token definitions
├── lex.yy.c         # Generated lexer source
├── y.tab.c          # Generated parser source
├── test.c           # Optional sample input
└── README.md         # Project documentation
```

The generated files are build artifacts. The `.l` and `.y` specifications, together with the Makefile, are the primary source files.

## Prerequisites

Install the following tools before building the project:

* GCC or another compatible C compiler
* Flex
* GNU Bison
* GNU Make

On Ubuntu or Debian-based Linux distributions, install the dependencies with:

```bash
sudo apt update
sudo apt install build-essential flex bison
```

Verify the installations:

```bash
gcc --version
flex --version
bison --version
make --version
```

## Build Instructions

Clone the repository and enter its directory:

```bash
git clone https://github.com/mayanksinharay/tinyc-compiler.git
cd tinyc-compiler
```

Build the lexer and parser:

```bash
make
```

The Makefile should generate the parser source and token header, generate the lexer source, and compile the resulting files into the parser executable.

If your Makefile uses a different target, replace `make` with the appropriate target defined in it.

To remove generated files and rebuild from scratch, if the Makefile provides a `clean` target:

```bash
make clean
make
```

## Usage

Run the generated parser against a source file using the executable name defined in your Makefile.

For example, if the executable is named `tinyc`:

```bash
./tinyc < test.c
```

Alternatively, run the parser interactively:

```bash
./tinyc
```

Enter a tinyC program and terminate the input according to your operating system's end-of-file convention (`Ctrl+D` on Linux/macOS or `Ctrl+Z`, followed by Enter, in Windows terminals).

The parser reports whether the input is syntactically accepted or rejected according to the implemented grammar and error-handling rules.

## Example Input

The following program illustrates several constructs covered by the grammar:

```c
int main() {
    int a = 10;
    int b = 20;
    int result;

    result = a + b * 2;

    if (result > 30) {
        result = result - 5;
    } else {
        result = result + 5;
    }

    return result;
}
```

This example exercises function definitions, declarations, initializers, arithmetic expressions, operator precedence, conditional statements, assignments, compound statements, and return statements.

**Note:** Acceptance of any example depends on the exact grammar and lexer rules implemented in the repository.

## Error Handling

The Bison parser can identify syntactically invalid input according to its grammar and invoke the configured syntax-error handler.

For example, a missing semicolon or an incorrectly structured conditional statement may result in a syntax error.

The diagnostic format and recovery behavior depend on the parser's error-handling implementation.

## Design Considerations

### Grammar-driven parsing

The grammar specifies how tokens can be combined into valid expressions, declarations, statements, and translation units. Layered expression productions encode operator precedence and associativity.

### Optional grammar elements

Optional constructs are represented using empty productions or dedicated optional non-terminals where needed. This allows the grammar to express constructs such as optional argument lists and optional expressions in loop headers.

### Generated interfaces

Bison generates parser source code and, when configured, a header containing token definitions. Flex uses these definitions to return tokens that the parser understands.

### Build automation

The Makefile coordinates generation and compilation so that the project can be rebuilt consistently from its source specifications.

## Limitations

* Supports only the subset of C described by the implemented grammar.
* Does not claim complete C99 compatibility.
* Syntax recognition alone does not establish semantic correctness.
* Type checking, complete symbol-table management, and code generation are outside the stated scope unless separately implemented.
* Runtime behavior and executable program generation are not provided merely by recognizing valid syntax.

## Future Improvements

Potential extensions include:

* Abstract syntax tree (AST) construction.
* Improved syntax-error messages and error recovery.
* Symbol-table construction and scope management.
* Semantic analysis and type checking.
* Support for additional C99 constructs.
* Automated regression tests covering valid and invalid programs.
* Intermediate representation and code generation.

## Learning Outcomes

This project explores practical concepts in compiler design, including:

* Tokenization and lexical rules.
* Context-free grammars and production rules.
* Parser generation using GNU Bison.
* Lexer-parser integration.
* Operator precedence and associativity.
* Build automation and dependency management.

## License

This project is available under the license specified in the repository. If you intend to make it open source, consider adding a `LICENSE` file with the license you choose.

---

**Developed as a compiler-design project exploring lexical analysis and grammar-driven syntax parsing for a subset of C.**
