# Day 16 - Prime Number Generator

## Problem Statement

Write a C program to generate all prime numbers from **2** to a given positive integer **N**.

The program should accept a positive integer from the user and display all the prime numbers between **2** and **N**.

A prime number is a number that has exactly two factors: **1** and **itself**.

---

## Objective

* Learn how to use nested `for` loops in C.
* Practice conditional statements using `if`.
* Understand the use of the modulus operator (`%`) for divisibility checking.
* Learn how to use a flag variable to determine whether a number is prime.
* Improve logical thinking by solving a real-world mathematical problem.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare the required variables.
5. Prompt the user to enter the value of **N**.
6. Read the value using `scanf()`.
7. Display a heading for the prime numbers.
8. Use an outer `for` loop to iterate from **2** to **N**.
9. Assume the current number is prime by setting a flag variable (`prime = 1`).
10. Use an inner `for` loop to check divisibility from **2** to **current number - 1**.
11. If the current number is divisible by any number:
    * Set the flag variable to **0**.
    * Exit the inner loop using `break`.
12. After checking all possible divisors:
    * If the flag variable is still **1**, print the current number.
13. Repeat until all numbers from **2** to **N** have been checked.
14. Return `0`.
15. End the program.

---

## Prime Number Definition

A prime number is a positive integer that has only two factors:

* 1
* Itself

### Examples of Prime Numbers

```text
2
3
5
7
11
13
17
19
23
29
```

### Examples of Non-Prime Numbers

```text
4
6
8
9
10
12
15
16
20
```

---

## Source Code

See `primeNum.c` file.

---

## Sample Input

```text
Enter the n value : 20
```

## Sample Output

```text
The prime numbers between 2 and 20 is :
2 3 5 7 11 13 17 19
```

---

### Another Example

#### Input

```text
Enter the n value : 10
```

#### Output

```text
The prime numbers between 2 and 10 is :
2 3 5 7
```

---

### Another Example

#### Input

```text
Enter the n value : 30
```

#### Output

```text
The prime numbers between 2 and 30 is :
2 3 5 7 11 13 17 19 23 29
```

---

## Concepts Learned

* Nested `for` Loops
* Conditional Statements (`if`)
* Modulus Operator (`%`)
* Flag Variables
* `break` Statement
* User Input using `scanf()`
* Decision Making in C
* Prime Number Logic

---

## Key Notes

* The program generates all prime numbers between **2** and the given value **N**.
* Each number is checked individually for divisibility.
* A flag variable is used to determine whether a number is prime.
* The `break` statement improves efficiency by stopping the inner loop once a divisor is found.
* This project demonstrates the use of nested loops and logical decision-making in C programming.

---

## What I Learned Today

Today I learned how to generate prime numbers using nested loops and conditional statements in C. I understood how to check whether a number is prime by testing its divisibility, how to use a flag variable to track the result, and how the `break` statement can improve efficiency by avoiding unnecessary iterations. This project strengthened my problem-solving skills and improved my understanding of loop-based algorithms.

---

**Author:** Naveen  
**Day:** 16