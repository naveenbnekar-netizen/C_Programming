# Day 22 - Print Odd Numbers Using While Loop

## Problem Statement

Write a C program to print all **odd numbers** from **1** up to a user-entered positive integer using a **while loop**.

The program should:

- Accept a positive integer **N** from the user.
- Use a **while loop** to iterate from **1** to **N**.
- Check whether each number is odd using the modulus (`%`) operator.
- Print all odd numbers, each on a new line.

---

## Objective

- Learn how to use the **while loop** in C.
- Understand loop initialization, condition, and increment.
- Practice using the modulus (`%`) operator to identify odd numbers.
- Improve logical thinking with conditional statements inside loops.
- Write clean and readable C programs.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare two integer variables:
   - `num` to store the user's input.
   - `i` and initialize it to `1`.
5. Prompt the user to enter a positive integer.
6. Read the input using `scanf()`.
7. Use a `while` loop to iterate from `1` to `num`.
8. Inside the loop:
   - Check if `i % 2 != 0`.
   - If true, print the value of `i`.
9. Increment `i` by `1`.
10. Continue until `i` becomes greater than `num`.
11. Return `0`.
12. End the program.

---

## Program Illustration

### For Input = 10

```text
==============================
    Odd Numbers Printer
==============================
Enter a number: 10

1
3
5
7
9
==============================
```

---

## Source Code

See **`odd.c`** file.

---

## Sample Input

```text
Enter a number: 15
```

## Sample Output

```text
1
3
5
7
9
11
13
15
```

---

## Another Example

### Input

```text
Enter a number: 8
```

### Output

```text
1
3
5
7
```

---

## Concepts Learned

- `while` Loop
- Conditional Statements (`if`)
- Modulus (`%`) Operator
- Loop Control
- User Input using `scanf()`
- Formatted Output using `printf()`
- Odd Number Logic

---

## Key Notes

- The loop starts from **1**, the first odd number.
- A number is considered **odd** if the remainder when divided by **2** is **not equal to 0**.
- The modulus operator (`%`) is commonly used to determine whether a number is odd or even.
- The `while` loop continues executing as long as the specified condition remains true.
- This program prints all odd numbers from **1** up to the entered limit (inclusive).

---

## What I Learned Today

Today I learned how to use the **while loop** to repeatedly execute a block of code until a condition becomes false. I also understood how the modulus (`%`) operator helps determine whether a number is odd. This program strengthened my understanding of loops, conditional statements, and iterative problem-solving in C.

---

## Author

**Naveen**

**Day:** 22