# Day 17 - Square Star Pattern

## Problem Statement

Write a C program to print a **square pattern** using the `*` (asterisk) character.

The program should accept a positive integer **N** from the user, where **N** represents the size of the square. Using nested `for` loops, print an **N × N** square consisting entirely of `*` characters.

The program should also validate the user's input and display an appropriate message if the entered value is zero or negative.

---

## Objective

* Learn how to use nested `for` loops in C.
* Understand the relationship between rows and columns in pattern printing.
* Practice user input validation using conditional statements.
* Improve logical thinking through simple pattern generation.
* Write clean and well-structured C programs.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare an integer variable to store the size of the square.
5. Prompt the user to enter the size of the square.
6. Read the input using `scanf()`.
7. Check whether the entered value is less than or equal to zero.
8. If the value is invalid:
   * Display an appropriate error message.
9. Otherwise:
   * Use an outer `for` loop to print each row.
   * Use an inner `for` loop to print the required number of `*` characters in each row.
   * Move to the next line after printing each row.
10. Return `0`.
11. End the program.

---

## Pattern Illustration

For **N = 5**

```text
*****
*****
*****
*****
*****
```

---

## Source Code

See `squarePattern.c` file.

---

## Sample Input

```text
Enter the size of the square : 5
```

## Sample Output

```text
*****
*****
*****
*****
*****
```

---

### Another Example

#### Input

```text
Enter the size of the square : 3
```

#### Output

```text
***
***
***
```

---

### Invalid Input Example

#### Input

```text
Enter the size of the square : -4
```

#### Output

```text
Invalid number
```

---

## Concepts Learned

* Nested `for` Loops
* Pattern Printing
* Conditional Statements (`if`)
* User Input using `scanf()`
* Input Validation
* Loop Control
* Row and Column Traversal

---

## Key Notes

* The outer loop controls the number of rows.
* The inner loop controls the number of columns.
* Each iteration of the inner loop prints one `*`.
* After each row is completed, a new line is printed.
* The program validates the input before printing the pattern.
* This program serves as the foundation for learning more complex pattern-printing problems.

---

## What I Learned Today

Today I learned how to print a square star pattern using nested `for` loops in C. I understood how the outer loop controls the rows while the inner loop controls the columns. I also learned the importance of validating user input before processing it. This project strengthened my understanding of nested loops and laid the foundation for solving more advanced pattern-printing problems.

---

**Author:** Naveen  
**Day:** 17