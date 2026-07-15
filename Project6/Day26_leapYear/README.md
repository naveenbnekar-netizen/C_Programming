# Day 26 - Leap Year Checker Using Functions

## Problem Statement

Write a C program to check whether a given year is a **Leap Year** or **Not a Leap Year** using **functions**.

The program should accept a year from the user, pass it to a function, and display whether the entered year is a leap year.

---

## Objective

- Learn how to create and use user-defined functions.
- Understand function declaration, definition, and function calls.
- Practice conditional statements (`if`, `else if`, `else`).
- Learn the logical conditions used to determine a leap year.
- Improve problem-solving skills using functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Declare a function `yearCheck(int year)`.
4. Define the `main()` function.
5. Declare an integer variable `year`.
6. Prompt the user to enter a year.
7. Read the input using `scanf()`.
8. Call the function `yearCheck(year)`.
9. Inside the function:
   - If the year is divisible by **400**, it is a Leap Year.
   - Else if the year is divisible by **4** but not divisible by **100**, it is a Leap Year.
   - Otherwise, it is **Not a Leap Year**.
10. Display the appropriate message.
11. Return to the `main()` function.
12. Return `0`.
13. End the program.

---

## Leap Year Rules

A year is considered a **Leap Year** if:

- It is divisible by **400**.

**OR**

- It is divisible by **4** but **not divisible by 100**.

Otherwise, it is **Not a Leap Year**.

---

## Examples

### Leap Years

```text
2000
2004
2008
2012
2020
2024
2400
```

### Not Leap Years

```text
1900
2001
2002
2003
2019
2021
2023
```

---

## Source Code

See `leapYear.c` file.

---

## Sample Input

```text
Enter the year: 2024
```

## Sample Output

```text
Entered year is leap year
```

---

### Another Example

#### Input

```text
Enter the year: 1900
```

#### Output

```text
Enter year is not a leap year
```

---

### Another Example

#### Input

```text
Enter the year: 2000
```

#### Output

```text
Enter year is Leap year
```

---

## Concepts Learned

- Functions in C
- Function Declaration
- Function Definition
- Function Calling
- Conditional Statements (`if`, `else if`, `else`)
- Modulus Operator (`%`)
- User Input using `scanf()`
- Decision Making in C

---

## Key Notes

- A leap year occurs every **4 years**, with exceptions for century years.
- Century years must be divisible by **400** to be considered leap years.
- The leap year logic is implemented inside a separate function.
- Using functions makes the program modular, reusable, and easier to understand.
- This program demonstrates how functions can simplify logical decision-making.

---

## What I Learned Today

Today I learned how to use functions in C to solve a real-world problem. I understood how to pass arguments to a function, perform conditional checks inside the function, and determine whether a year is a leap year using the standard leap year rules. This project improved my understanding of functions, conditional statements, and program modularity.

---

**Author:** Naveen  
**Day:** 26