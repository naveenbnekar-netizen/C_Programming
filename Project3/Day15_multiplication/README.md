# Day 15 - Multiplication Table Generator

## Problem Statement

Write a C program to generate the multiplication table of a given number.

The program should accept an integer from the user and display its multiplication table from **1 to 10** in a clear and formatted manner.

---

## Objective

* Learn how to use the `for` loop.
* Practice performing arithmetic operations in C.
* Understand how repetitive tasks can be handled using loops.
* Improve formatting of program output using `printf()`.
* Strengthen problem-solving skills through simple mathematical computations.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare an integer variable to store the number.
5. Accept the integer from the user.
6. Display the program heading.
7. Use a `for` loop to iterate from **1 to 10**.
8. Multiply the given number by the current loop counter.
9. Display each multiplication result in a formatted manner.
10. Display the closing line.
11. Return `0`.
12. End the program.

---

## Program Flow

| Step | Action                             |
| ---- | ---------------------------------- |
| 1    | Read an integer from the user.     |
| 2    | Display the heading.               |
| 3    | Execute a `for` loop from 1 to 10. |
| 4    | Calculate `number × loop counter`. |
| 5    | Display the multiplication result. |
| 6    | Repeat until the loop ends.        |

---

## Source Code

See `multiplication.c` in this folder.

---

## Sample Input

```text
Enter an integer: 7
```

## Sample Output

```text
==================================
 Multiplication Table of 7
==================================
 7 x  1 =   7
 7 x  2 =  14
 7 x  3 =  21
 7 x  4 =  28
 7 x  5 =  35
 7 x  6 =  42
 7 x  7 =  49
 7 x  8 =  56
 7 x  9 =  63
 7 x 10 =  70
==================================
```

---

### Another Example

#### Input

```text
Enter an integer: 12
```

#### Output

```text
==================================
 Multiplication Table of 12
==================================
12 x  1 =  12
12 x  2 =  24
12 x  3 =  36
12 x  4 =  48
12 x  5 =  60
12 x  6 =  72
12 x  7 =  84
12 x  8 =  96
12 x  9 = 108
12 x 10 = 120
==================================
```

---

### Another Example

#### Input

```text
Enter an integer: -5
```

#### Output

```text
==================================
 Multiplication Table of -5
==================================
-5 x  1 =  -5
-5 x  2 = -10
-5 x  3 = -15
-5 x  4 = -20
-5 x  5 = -25
-5 x  6 = -30
-5 x  7 = -35
-5 x  8 = -40
-5 x  9 = -45
-5 x 10 = -50
==================================
```

---

### Zero Example

#### Input

```text
Enter an integer: 0
```

#### Output

```text
==================================
 Multiplication Table of 0
==================================
0 x  1 = 0
0 x  2 = 0
0 x  3 = 0
0 x  4 = 0
0 x  5 = 0
0 x  6 = 0
0 x  7 = 0
0 x  8 = 0
0 x  9 = 0
0 x 10 = 0
==================================
```

---

## Concepts Learned

* `for` Loop
* Variables and Data Types
* Arithmetic Operators (`*`)
* Loop Control Statements
* User Input using `scanf()`
* Output Formatting using `printf()`
* Repetitive Computation

---

## Key Notes

* The multiplication table is generated from **1 to 10**.
* The program works for **positive, negative, and zero** values.
* A `for` loop efficiently handles repetitive calculations.
* Formatted output improves the readability of the multiplication table.
* The program demonstrates a practical use of loops in C programming.

---

## What I Learned Today

Today I learned how to use a `for` loop to perform repetitive calculations efficiently. I practiced generating a multiplication table using arithmetic operations, formatting the output for better readability, and writing a simple yet structured C program. This project strengthened my understanding of loops and their importance in reducing repetitive code.

**Author:** Naveen
**Day:** 15
