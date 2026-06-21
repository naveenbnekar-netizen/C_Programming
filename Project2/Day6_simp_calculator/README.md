# Day 01 - Simple Arithmetic Calculator

## Problem Statement

Write a C program to perform basic arithmetic operations on two integer numbers.

The program should accept two numbers from the user and calculate the following operations:

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`*`)
* Division (`/`)
* Modulus (`%`)

The results of all operations should be displayed on the screen.

## Objective

* Learn how to accept integer input from the user.
* Practice using arithmetic operators in C.
* Understand the use of variables for storing calculated results.
* Display multiple outputs in a formatted manner.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare variables for two integer numbers.
5. Prompt the user to enter the first number.
6. Read the input using `scanf()`.
7. Prompt the user to enter the second number.
8. Read the input using `scanf()`.
9. Perform addition, subtraction, multiplication, division, and modulus operations.
10. Store the results in separate variables.
11. Display all calculated results on the screen.
12. Return `0`.
13. End the program.

## Operations Used

### Addition

Addition = Number1 + Number2

### Subtraction

Subtraction = Number1 - Number2

### Multiplication

Multiplication = Number1 × Number2

### Division

Division = Number1 ÷ Number2

### Modulus

Modulus = Remainder when Number1 is divided by Number2

## Source Code

See `simple_calculator.c` in this folder.

## Sample Input

```text
Enter the num1 : 20
Enter the num2 : 10
```

## Sample Output

```text
The result of the addition       = 30
The result of the subtraction    = 10
The result of the multiplication = 200
The result of the division       = 2
The result of the modulus        = 0
```

## Concepts Learned

* Variables and Data Types
* User Input using `scanf()`
* Arithmetic Operators
* Integer Division
* Modulus Operator
* Output Formatting using `printf()`

## Key Notes

* The program uses integer data types for calculations.
* Division between two integers produces an integer result.
* The modulus operator (`%`) returns the remainder after division.
* Division and modulus operations should not be performed when the second number is zero.
* Proper output formatting improves readability.

## What I Learned Today

Today I learned how to use arithmetic operators in C programming to perform basic mathematical calculations. I practiced taking user input, storing values in variables, performing multiple operations, and displaying the results in a structured format.

**Author:** Naveen
**Day:** 06