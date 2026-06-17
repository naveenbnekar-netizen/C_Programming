# Day 03 - EMI Calculator

## Problem Statement

Write a C program to calculate the Interest Amount, Total Amount, and Monthly EMI for a loan.

The program should accept the following inputs from the user:

* Principal Amount (Loan Amount)
* Rate of Interest (Annual Interest Rate)
* Time Period (in Years)

Using the given inputs, the program should calculate and display:

* Interest Amount
* Total Amount to be Repaid
* Monthly EMI

## Objective

* Learn how to accept numeric input from the user.
* Practice performing arithmetic calculations in C.
* Understand the use of formulas in programming.
* Display calculated results in a formatted manner.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare variables for Principal, Rate, Time, Interest, Total Amount, and EMI.
5. Prompt the user to enter the Principal Amount, Rate of Interest, and Time Period.
6. Read the inputs using `scanf()`.
7. Calculate the Interest Amount using the Simple Interest formula.
8. Calculate the Total Amount to be Repaid.
9. Calculate the Monthly EMI.
10. Display all calculated values in a formatted output.
11. Return `0`.
12. End the program.

## Formula Used

### Simple Interest

Interest = (Principal × Rate × Time) / 100

### Total Amount

Total Amount = Principal + Interest

### Monthly EMI

EMI = Total Amount / (Time × 12)

## Source Code

See `emi_calculator.c` in this folder.

## Sample Input

```text
Enter Principal Amount: 100000
Enter Rate of Interest: 10
Enter Time Period (Years): 2
```

## Sample Output



Principal Amount : 100000.00
Interest Amount  : 20000.00
Total Amount     : 120000.00
Monthly EMI      : 5000.00


## Concepts Learned

* Variables and Data Types
* User Input using `scanf()`
* Arithmetic Operations
* Financial Calculations
* Output Formatting using `printf()`

## Key Notes

* User inputs are accepted using `scanf()`.
* Calculations are performed using arithmetic operators.
* Proper formatting improves the readability of program output.

## What I Learned Today

Today I learned how to perform financial calculations using C programming. I practiced accepting numeric inputs, applying formulas, and displaying the results in a structured and user-friendly format.

**Author:** Naveen
**Day:** 03
