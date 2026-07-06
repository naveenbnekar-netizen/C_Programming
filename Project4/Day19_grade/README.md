# Day 19 - Grade Evaluation Using Switch Statement

## Problem Statement

Write a C program that accepts a **grade** from the user and displays the corresponding performance message using a **switch statement**.

The program should accept both **uppercase** and **lowercase** grade characters. If the entered grade is not valid, the program should display an appropriate error message.

---

## Objective

- Learn how to use the `switch` statement with character values.
- Understand the purpose of `case`, `break`, and `default`.
- Practice handling multiple cases for the same output.
- Learn to validate user input.
- Write clean and readable C programs.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare a character variable to store the grade.
5. Prompt the user to enter a grade.
6. Read the grade using `scanf()`.
7. Use a `switch` statement to evaluate the entered grade.
8. For each valid grade:
   - `A` or `a` → Display **Excellent**
   - `B` or `b` → Display **Very Good**
   - `C` or `c` → Display **Good**
   - `D` or `d` → Display **Average**
   - `E` or `e` → Display **Fail**
9. Use the `break` statement after each case.
10. If the entered grade does not match any valid case, execute the `default` case and display **"Invalid grade."**
11. Return `0`.
12. End the program.

---

## Program Illustration

### For Grade = B

```text
=============================
     Grade Evaluation
=============================
Grade: B
Performance: Very Good
=============================
```

---

## Source Code

See **`gradeEvaluation.c`** file.

---

## Sample Input

```text
Enter the grade (A, B, C, D, E): A
```

## Sample Output

```text
Excellent
```

---

## Another Example

### Input

```text
Enter the grade (A, B, C, D, E): c
```

### Output

```text
Good
```

---

## Invalid Input Example

### Input

```text
Enter the grade (A, B, C, D, E): X
```

### Output

```text
Invalid grade
```

---

## Concepts Learned

- `switch` Statement
- Character Input using `scanf()`
- Multiple `case` Labels
- `break` Statement
- `default` Case
- Decision Making in C
- Input Validation
- Formatted Output using `printf()`

---

## Key Notes

- The `switch` statement can be used with **character** values as well as integers.
- Multiple `case` labels can share the same block of code.
- The `break` statement prevents execution from continuing into the next case.
- The `default` case handles invalid grade inputs.
- The program accepts both **uppercase** and **lowercase** grades for better user convenience.
- This program helps build a strong understanding of decision-making statements in C.

---

## What I Learned Today

Today I learned how to use the `switch` statement with character input in C. I understood how multiple `case` labels can be used to handle both uppercase and lowercase characters efficiently. This program also improved my understanding of input validation and strengthened my knowledge of decision-making statements.

---

## Author

**Naveen**

**Day:** 19