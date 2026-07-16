# Day 27 - Palindrome Number Checker Using Functions

## Problem Statement

Write a C program to check whether a given number is a **Palindrome** or **Not a Palindrome** using **functions**.

The program should accept an integer from the user, pass it to a function, reverse the number, and determine whether the reversed number is equal to the original number.

---

## Objective

- Learn how to create and use user-defined functions.
- Understand function declaration, definition, and function calls.
- Practice loops and conditional statements.
- Learn how to reverse a number using arithmetic operators.
- Improve problem-solving skills using functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Declare a function `palindromeCheck(int num)`.
4. Define the `main()` function.
5. Declare an integer variable `num`.
6. Prompt the user to enter a number.
7. Read the input using `scanf()`.
8. Call the function `palindromeCheck(num)`.
9. Inside the function:
   - Store the original number.
   - Initialize `reverse` to `0`.
   - Repeat until the number becomes `0`:
     - Find the last digit using `% 10`.
     - Build the reversed number.
     - Remove the last digit using `/ 10`.
   - Compare the reversed number with the original number.
   - If both are equal, display **Palindrome**.
   - Otherwise, display **Not Palindrome**.
10. Return to the `main()` function.
11. Return `0`.
12. End the program.

---

## What is a Palindrome Number?

A **Palindrome Number** is a number that remains the same when its digits are reversed.

Examples:

```text
121
1331
12321
4554
7
```

Not Palindrome Numbers:

```text
123
456
1234
987
120
```

---

## Source Code

See `palindromeNum.c` file.

---

## Sample Input

```text
Enter the num: 121
```

## Sample Output

```text
Palindrome: 121
```

---

### Another Example

#### Input

```text
Enter the num: 123
```

#### Output

```text
Not Palindrome: 321
```

---

### Another Example

#### Input

```text
Enter the num: 1221
```

#### Output

```text
Palindrome: 1221
```

---

## Concepts Learned

- Functions in C
- Function Declaration
- Function Definition
- Function Calling
- While Loop
- Conditional Statements (`if`, `else`)
- Modulus Operator (`%`)
- Integer Division (`/`)
- User Input using `scanf()`
- Number Reversal Logic

---

## Key Notes

- A palindrome number reads the same from left to right and right to left.
- The original number should be stored before reversing it.
- The reverse of the number is calculated using modulus (`%`) and division (`/`) operators.
- Functions make the program modular, reusable, and easier to understand.
- This program demonstrates how loops and functions work together to solve a problem.

---

## What I Learned Today

Today I learned how to use functions in C to check whether a number is a palindrome. I understood how to reverse a number using a `while` loop, compare it with the original number, and display the appropriate result. This project strengthened my understanding of functions, loops, arithmetic operators, and conditional statements.

---

**Author:** Naveen  
**Day:** 27