# Day 08 - Age Calculator

## Problem Statement

Write a C program to calculate the approximate age of a person based on their Date of Birth (DOB).

The program should accept the user's birth year and current year as input and calculate the approximate age using a simple subtraction formula.

## Objective

* Learn how to accept user input using `scanf()`.
* Practice using arithmetic operations in C.
* Understand how to perform calculations using variables.
* Display formatted output using `printf()`.

## Algorithm

1. Start the program.

2. Include the `stdio.h` header file.

3. Define the `main()` function.

4. Declare variables for birth year, current year, and age.

5. Prompt the user to enter the birth year.

6. Read the birth year using `scanf()`.

7. Prompt the user to enter the current year.

8. Read the current year using `scanf()`.

9. Calculate the age using the formula:

   ```
   Age = Current Year - Birth Year
   ```

10. Display the calculated age.

11. Return `0`.

12. End the program.

## Formula Used

### Age Calculation

Age = Current Year − Birth Year

## Source Code

See `DOB.c` in this folder.

## Sample Input

```text
Enter the birth year: 2004
Enter the current year: 2026
```

## Sample Output

```text
The age of the person is: 22 years
```

## Concepts Learned

* Variables and Data Types
* User Input using `scanf()`
* Arithmetic Operations
* Age Calculation
* Output Formatting using `printf()`

## Key Notes

* The program calculates the approximate age based on years only.
* It does not consider the month and date of birth.
* Age is calculated using simple subtraction.
* Integer variables are sufficient since years are whole numbers.
* The result is an approximate age.

## What I Learned Today

Today I learned how to accept user input, store values in variables, and perform arithmetic calculations in C. I also practiced writing clean and readable code with meaningful variable names and comments while calculating the approximate age of a person.

**Author:** Naveen

**Day:** 08
