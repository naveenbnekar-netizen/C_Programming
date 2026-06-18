# Day 04 - Temperature Converter

## Problem Statement

Write a C program to convert temperature between Celsius and Fahrenheit.

The program should accept a temperature value from the user and convert it from Celsius to Fahrenheit using the standard conversion formula.

## Objective

* Learn how to accept floating-point input from the user.
* Practice performing arithmetic calculations in C.
* Understand the use of mathematical formulas in programming.
* Display calculated results in a formatted manner.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare variables for Celsius and Fahrenheit temperatures.
5. Prompt the user to enter the temperature in Celsius.
6. Read the input using `scanf()`.
7. Calculate the Fahrenheit temperature using the conversion formula.
8. Display the converted temperature.
9. Return `0`.
10. End the program.

## Formula Used

### Celsius to Fahrenheit

Fahrenheit = ( 9 / 5  * Celsius ) + 32

## Source Code

See `temperature.c` in this folder.

## Sample Input

```text
Enter the temperature in Celsius: 25
```

## Sample Output

```text
The temperature value in Fahrenheit is: 77.00°F
```

## Concepts Learned

* Variables and Data Types
* User Input using `scanf()`
* Arithmetic Operations
* Temperature Conversion Formula
* Output Formatting using `printf()`

## Key Notes

* Floating-point values are used for accurate temperature calculations.
* Use `9.0 / 5.0` instead of `9 / 5` to avoid integer division.
* Proper formatting improves the readability of program output.

## What I Learned Today

Today I learned how to perform temperature conversion using C programming. I practiced accepting floating-point input, applying mathematical formulas, and displaying the results in a clean and user-friendly format.

**Author:** Naveen
**Day:** 04
