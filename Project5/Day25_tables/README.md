# Day 25 - Multiplication Table Using Functions

## Problem Statement

Write a C program to print the multiplication table of a user-entered number using a **function**.

The program should:

- Accept an integer from the user.
- Pass the entered number to a user-defined function.
- Print the multiplication table from **1 to 10**.
- Display each multiplication in the format:

```text
number * i = result
```

---

## Objective

- Learn how to declare, define, and call functions in C.
- Understand parameter passing in functions.
- Practice using `for` loops.
- Improve code modularity by separating logic into a function.
- Strengthen problem-solving skills using functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Declare the function prototype `printTables()`.
4. Define the `main()` function.
5. Declare an integer variable `num`.
6. Prompt the user to enter a number.
7. Read the input using `scanf()`.
8. Call the `printTables()` function and pass the entered number as an argument.
9. Inside the function, use a `for` loop to iterate from `1` to `10`.
10. Print the multiplication table in each iteration.
11. Return `0`.
12. End the program.

---

## Program Illustration

### Input

```text
Enter a number: 7
```

### Output

```text
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
```

---

## Source Code

See **`printTable.c`** file.

---

## Sample Input

```text
Enter a number: 12
```

## Sample Output

```text
12 * 1 = 12
12 * 2 = 24
12 * 3 = 36
12 * 4 = 48
12 * 5 = 60
12 * 6 = 72
12 * 7 = 84
12 * 8 = 96
12 * 9 = 108
12 * 10 = 120
```

---

## Concepts Learned

- Functions in C
- Function Declaration
- Function Definition
- Function Call
- Function Parameters
- `for` Loop
- User Input using `scanf()`
- Formatted Output using `printf()`

---

## Key Notes

- The multiplication table logic is implemented inside a separate function, making the program modular and reusable.
- The user-entered number is passed as an argument to the function.
- A `for` loop is used to generate the multiplication table from `1` to `10`.
- Using functions improves code readability and maintainability.

---

## What I Learned Today

Today I learned how to use functions to organize a C program into smaller, reusable parts. I practiced function declaration, function definition, and function calls while passing arguments to a function. I also reinforced my understanding of `for` loops by generating a multiplication table from 1 to 10. This exercise helped me understand how modular programming makes code easier to read, reuse, and maintain.

---

## Author

**Naveen**

**Day:** 25