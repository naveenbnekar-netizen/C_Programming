# Day 18 - Month Information Using Switch Statement

## Problem Statement

Write a C program that accepts a **month number (1–12)** from the user and displays the corresponding **month name** along with the **number of days** in that month using a `switch` statement.

The program should validate the user's input and display an appropriate message if the entered month number is outside the valid range.

> **Note:** Assume February has **28 days** (ignore leap years).

---

## Objective

* Learn how to use the `switch` statement in C.
* Understand how `case`, `break`, and `default` work.
* Practice mapping numeric input to meaningful information.
* Improve decision-making logic using `switch`.
* Write clean and well-structured C programs.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare an integer variable to store the month number.
5. Prompt the user to enter a month number (1–12).
6. Read the input using `scanf()`.
7. Display a heading for the output.
8. Use a `switch` statement to determine the corresponding month.
9. For each valid `case`:

   * Display the month name.
   * Display the number of days in that month.
   * Use the `break` statement to exit the `switch`.
10. If the entered value does not match any valid case:

    * Display an "Invalid number" message using the `default` case.
11. Return `0`.
12. End the program.

---

## Program Illustration

For **Month = 7**

```text
========================================
     The Information of month is
========================================
The month is July.
The number of the days are: 31 days
========================================
```

---

## Source Code

See `monthDay.c` file.

---

## Sample Input

```text
Enter the number of month (1 - 12): 5
```

## Sample Output

```text
========================================
     The Information of month is
========================================
The month is May.
The number of the days are: 31 days
========================================
```

---

### Another Example

#### Input

```text
Enter the number of month (1 - 12): 11
```

#### Output

```text
========================================
     The Information of month is
========================================
The month is November.
The number of the days are: 30 days
========================================
```

---

### Invalid Input Example

#### Input

```text
Enter the number of month (1 - 12): 15
```

#### Output

```text
========================================
     The Information of month is
========================================
Invalid number.
========================================
```

---

## Concepts Learned

* `switch` Statement
* `case` Labels
* `break` Statement
* `default` Case
* Decision Making
* User Input using `scanf()`
* Formatted Output using `printf()`

---

## Key Notes

* The `switch` statement provides an efficient alternative to multiple `if-else` conditions.
* Each `case` represents a specific month number.
* The `break` statement prevents execution from continuing into the next case.
* The `default` case handles invalid user input.
* February is assumed to have 28 days in this program.
* This program helps build a strong foundation for understanding decision-making statements in C.

---

## What I Learned Today

Today I learned how to use the `switch` statement to handle multiple conditions in C. I understood the purpose of `case`, `break`, and `default`, and how they work together to make programs more organized and readable. This project also helped me practice validating user input and strengthened my understanding of decision-making statements.

---

**Author:** Naveen
**Day:** 18