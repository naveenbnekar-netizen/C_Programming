# Day 30 - Print Numbers from 1 to N Using Recursion

## Problem Statement

Write a C program to print numbers from **1 to N** using **recursion**.

The program should accept an integer `N` from the user and recursively print all numbers starting from `1` up to `N`.

---

## Objective

* Understand the concept of recursion.
* Learn how recursive function calls work.
* Practice identifying the base case and recursive case.
* Print numbers in ascending order using recursion.
* Strengthen problem-solving skills using recursive functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Declare a recursive function `printNumbers(int n)`.
4. Inside `main()`:

   * Declare an integer variable `n`.
   * Prompt the user to enter the value of `n`.
   * Read the value using `scanf()`.
   * Call `printNumbers(n)`.
5. Inside `printNumbers()`:

   * If `n == 0`, return (base case).
   * Recursively call `printNumbers(n - 1)`.
   * Print the current value of `n`.
6. End the program.

---

## How Recursion Works

The function first keeps calling itself with smaller values of `n` until it reaches the **base case** (`n == 0`).

After reaching the base case, the function calls start returning one by one, and each value of `n` is printed.

This is why the numbers appear in **ascending order**.

Example:

```text
Input:
5

Function Calls:
printNumbers(5)
    ↓
printNumbers(4)
    ↓
printNumbers(3)
    ↓
printNumbers(2)
    ↓
printNumbers(1)
    ↓
printNumbers(0)
    ↓
Return

Output:
1 2 3 4 5
```

---

## Source Code

See `printNum.c` file.

---

## Sample Input

```text
Enter the value of n: 5
```

## Sample Output

```text
1 2 3 4 5
```

---

### Another Example

#### Input

```text
Enter the value of n: 8
```

#### Output

```text
1 2 3 4 5 6 7 8
```

---

### Another Example

#### Input

```text
Enter the value of n: 1
```

#### Output

```text
1
```

---

## Concepts Learned

* Recursion
* Recursive Function
* Base Case
* Recursive Call
* Function Declaration
* Function Definition
* User Input using `scanf()`
* Output using `printf()`

---

## Key Notes

* A recursive function is a function that calls itself.
* Every recursive function must have a **base case** to stop infinite recursion.
* Printing **after** the recursive call produces the numbers in **ascending order**.
* If the `printf()` statement is placed **before** the recursive call, the numbers will be printed in **descending order**.
* The recursion ends when `n` becomes `0`.

---

## What I Learned Today

Today I learned how recursion works by solving a simple problem of printing numbers from **1 to N**. I understood the importance of the base case, how recursive calls are stacked in memory, and how the position of the `printf()` statement affects the output order.

---

**Author:** Naveen
**Day:** 30
