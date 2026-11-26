# calculator-c

A modular command-line calculator written in C11, built to practice clean C fundamentals, strict compiler warnings, pointer-based output parameters, safe `stdin` buffer handling, and automated builds with `make`.

## Features

- Arithmetic operations: Addition (`+`), Subtraction (`-`), Multiplication (`*`), Division (`/`), and Modulus (`%` via `fmod`)
- Modular architecture separating input validation (`read_double`), buffer cleanup (`clear_input_buffer`), and arithmetic logic (`calculate`)
- Continuous calculation loop (`do-while`) for running multiple calculations in one session
- Numeric input validation using `scanf` return-value checking and `stdin` buffer clearing
- Division-by-zero and modulus-by-zero protection
- Automated builds and cleanup via `Makefile`

## Prerequisites

- A C11-compatible compiler (`clang` or `gcc`) and `make`
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

2. Build the executable using `make`:

```bash
make
```

3. Run the calculator:

```bash
./calculator
```

4. Remove the compiled binary when needed:

```bash
make clean
```

## Example Usage

```text
========================
      C CALCULATOR
========================
Enter first number: 15
Enter operator (+, -, *, /, %): *
Enter second number: 5
Result: 75.00

Perform another calculation? (y/n): n
Goodbye!
```

## Planned Improvements

- Support additional math operations (power, square root)
- Split into multi-file structure (`calculator.h` and `calculator.c`)
- Add unit tests for the `calculate()` function
