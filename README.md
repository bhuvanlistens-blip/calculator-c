# calculator-c

A command-line calculator written in C11, built to practice clean C fundamentals, compiler warnings, input validation, and safe `stdin` buffer handling.

## Features

- Arithmetic operations: Addition (`+`), Subtraction (`-`), Multiplication (`*`), Division (`/`), and Modulus (`%` via `fmod`)
- Continuous calculation loop (`do-while`) for running multiple calculations in one session
- Numeric input validation using `scanf` return-value checking
- `stdin` buffer clearing to recover cleanly from invalid non-numeric input
- Division-by-zero and modulus-by-zero protection

## Prerequisites

- A C11-compatible compiler (`clang` or `gcc`)
- On macOS, install Apple Command Line Tools if not already installed:

```bash
xcode-select --install
```

## Build and Run

1. Clone the repository:

```bash
git clone [https://github.com/bhuvanlistens-blip/calculator-c.git](https://github.com/bhuvanlistens-blip/calculator-c.git)
cd calculator-c
```

2. Compile with strict warnings enabled and link the math library:

```bash
clang -Wall -Wextra -std=c11 main.c -o calculator -lm
```

3. Run the executable:

```bash
./calculator
```

## Example Usage

```text
========================
      C CALCULATOR
========================
Enter first number: 20
Enter operator (+, -, *, /, %): %
Enter second number: 5
Result: 0.00

Perform another calculation? (y/n): n
Goodbye!
```

## Planned Improvements

- Refactor arithmetic operations into modular functions
- Add a `Makefile` for one-command builds
- Support additional math operations (power, square root)
