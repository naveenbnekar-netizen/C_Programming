# Day 29 - Permutation Calculator Using Loops

## Problem Statement

Write a C program to calculate the **Permutation** of two numbers (`n` and `r`) using loops.

The program should accept the values of `n` and `r` from the user, calculate the factorial of `n` and `(n-r)`, and then compute the permutation using the formula:

**P(n, r) = n! / (n - r)!**

---

## Objective

- Learn how to calculate factorials using loops.
- Understand the concept of permutations.
- Practice using `for` loops for repetitive calculations.
- Perform arithmetic operations using user input.
- Strengthen problem-solving skills using mathematical formulas.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare integer variables:
   - `n`
   - `r`
   - `fact_n`
   - `fact_nr`
5. Initialize `fact_n` and `fact_nr` to `1`.
6. Prompt the user to enter the value of `n`.
7. Read the value using `scanf()`.
8. Prompt the user to enter the value of `r`.
9. Read the value using `scanf()`.
10. Calculate the factorial of `n` using a `for` loop.
11. Calculate `n - r` and store it in `nr`.
12. Calculate the factorial of `nr` using another `for` loop.
13. Compute the permutation using the formula:

    ```
    Permutation = n! / (n-r)!
    ```

14. Display the calculated permutation.
15. Return `0`.
16. End the program.

---

## What is a Permutation?

A **Permutation** is an arrangement of objects where the **order matters**.

The formula for permutation is:

```text
P(n, r) = n! / (n-r)!
```

Where:

- **n** = Total number of objects
- **r** = Number of objects to be arranged
- **!** = Factorial

Example:

```text
n = 5
r = 2

P(5,2) = 5! / (5-2)!
       = 120 / 6
       = 20
```

---

## Source Code

See `permutation.c` file.

---

## Sample Input

```text
Enter the value of n: 5
Enter the value of r: 2
```

## Sample Output

```text
Permutation is: 20
```

---

### Another Example

#### Input

```text
Enter the value of n: 6
Enter the value of r: 3
```

#### Output

```text
Permutation is: 120
```

---

### Another Example

#### Input

```text
Enter the value of n: 7
Enter the value of r: 0
```

#### Output

```text
Permutation is: 1
```

---

## Concepts Learned

- `for` Loop
- Factorial Calculation
- Permutation Formula
- Arithmetic Operations
- Variables in C
- User Input using `scanf()`
- Mathematical Problem Solving

---

## Key Notes

- Permutation represents the number of possible arrangements where **order is important**.
- Factorial of a number is the product of all positive integers from `1` to that number.
- The formula used is:

  ```text
  P(n,r) = n! / (n-r)!
  ```

- The program uses two separate `for` loops to calculate factorials.
- This implementation assumes that **n ≥ r**. If `r > n`, the result is not mathematically valid, so input validation can be added as an improvement.

---

## What I Learned Today

Today I learned how to calculate permutations using factorials in C. I practiced using multiple `for` loops to compute factorial values, applied the permutation formula, and strengthened my understanding of loops, variables, arithmetic operations, and mathematical programming.

---

**Author:** Naveen  
**Day:** 29