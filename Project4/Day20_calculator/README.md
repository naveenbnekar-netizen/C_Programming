# Day 20 - Simple Calculator Using Switch Statement

## Problem Statement

Write a C program that performs **basic arithmetic operations** using a `switch` statement.

The program should accept two integer values and an arithmetic operator (`+`, `-`, `*`, `/`, or `%`) from the user. Based on the operator entered, the program should perform the corresponding operation and display the result.

If the user enters an invalid operator, the program should display an appropriate error message.

---

## Objective

* Learn how to use the `switch` statement in C.
* Understand how to perform arithmetic operations based on user input.
* Practice reading multiple inputs using `scanf()`.
* Improve decision-making skills using `switch-case`.
* Write clean and structured C programs.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare two integer variables and one character variable for the operator.
5. Prompt the user to enter the first integer.
6. Read the first integer using `scanf()`.
7. Prompt the user to enter the second integer.
8. Read the second integer using `scanf()`.
9. Prompt the user to enter an arithmetic operator.
10. Read the operator using `scanf()`.
11. Use a `switch` statement to check the entered operator.
12. Perform the corresponding arithmetic operation:
    * `+` → Addition
    * `-` → Subtraction
    * `*` → Multiplication
    * `/` → Integer Division
    * `%` → Modulus (Remainder)
13. Display the calculated result.
14. If the operator is invalid, display an appropriate error message.
15. Return `0`.
16. End the program.

---

## Supported Operations

| Operator |       Operation     |
|----------|---------------------|
| `+`      |       Addition      |
| `-`      |    Multiplication   |
| `/`      |   Integer Division  |
| `%`      | Modulus (Remainder) |

---

## Source Code

See `calculator.c` file.

---

## Sample Input

```text
Enter the first number:
15

Enter the second number:
5

Enter the operator:
+
```

## Sample Output

```text
The sum of 15 and 5 is: 20
```

---

### Another Example

#### Input

```text
Enter the first number:
20

Enter the second number:
4

Enter the operator:
/
```

#### Output

```text
The division of 20 and 4 is: 5
```

---

### Another Example

#### Input

```text
Enter the first number:
17

Enter the second number:
5

Enter the operator:
%
```

#### Output

```text
The modular of 17 and 5 is: 2
```

---

### Invalid Input Example

#### Input

```text
Enter the first number:
10

Enter the second number:
5

Enter the operator:
&
```

#### Output

```text
Entered invalid operator
```

---

## Concepts Learned

* Switch Statement
* Switch-Case Control Flow
* Arithmetic Operators
* User Input using `scanf()`
* Integer Arithmetic
* Decision Making in C
* Default Case Handling

---

## Key Notes

* The `switch` statement selects the operation based on the entered operator.
* Each `case` performs a different arithmetic operation.
* The `break` statement prevents execution from falling through to the next case.
* The `default` case handles invalid operator inputs.
* Division (`/`) performs **integer division** because both operands are integers.
* The modulus (`%`) operator returns the remainder after division.
* This program demonstrates a practical use of the `switch` statement for menu-driven and calculator-based applications.

---

## What I Learned Today

Today I learned how to use the `switch` statement to perform different arithmetic operations based on user input. I understood how each `case` executes a specific block of code and why the `break` statement is important. I also learned how the `default` case helps handle invalid inputs, making the program more reliable and user-friendly.

---

**Author:** Naveen  
**Day:** 18