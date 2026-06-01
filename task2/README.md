# Task 2 - Simple Calculator

A simple C++ console calculator that performs basic arithmetic operations.

## Features
- Addition, Subtraction, Multiplication, Division
- Handles division by zero gracefully
- Clean single-expression input format

## How to Compile & Run

```bash
g++ simple_calculator.cpp -o simple_calculator
./simple_calculator
```

## How to Use
1. Run the program
2. Enter an expression in the format: `number operator number`
   - Example: `10 + 5` or `8 / 2`
3. The result is displayed immediately

## Supported Operators
| Operator | Operation      |
|----------|----------------|
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |

## Sample Output
```
=== Simple Calculator ===
Enter expression (e.g. 5 + 3): 12 * 4
Result: 48

Enter expression (e.g. 5 + 3): 10 / 0
Error: Division by zero!
```

## Author
CODSOFT C++ Programming Internship
