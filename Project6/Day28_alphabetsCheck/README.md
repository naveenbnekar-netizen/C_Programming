# Day 28 - Vowel Checker Using Functions

## Problem Statement

Write a C program to check whether a given character is a **Vowel** or **Not a Vowel** using **functions**.

The program should accept a character from the user, pass it to a user-defined function, and determine whether the entered character is one of the English vowels (`A`, `E`, `I`, `O`, `U` or `a`, `e`, `i`, `o`, `u`).

---

## Objective

- Learn how to create and use user-defined functions.
- Understand function declaration, definition, and function calls.
- Practice conditional statements using `if` and `else`.
- Learn how to compare characters using logical operators.
- Improve problem-solving skills using functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Declare the function `vowelCheck(char ch)`.
4. Define the `main()` function.
5. Declare a character variable `ch`.
6. Prompt the user to enter a character.
7. Read the character using `scanf()`.
8. Call the function `vowelCheck(ch)`.
9. Inside the function:
   - Compare the entered character with all uppercase and lowercase vowels.
   - If the character matches any vowel (`A`, `E`, `I`, `O`, `U`, `a`, `e`, `i`, `o`, `u`):
     - Display **Entered character is vowel**.
   - Otherwise:
     - Display **Entered character is not a vowel**.
10. Return to the `main()` function.
11. Return `0`.
12. End the program.

---

## What is a Vowel?

A **Vowel** is one of the five letters in the English alphabet that represent vowel sounds.

The vowels are:

```text
A, E, I, O, U
a, e, i, o, u
```

All other alphabet letters are called **Consonants**.

Examples of Vowels:

```text
A
e
I
o
U
```

Examples of Non-Vowels:

```text
b
C
x
M
z
```

---

## Source Code

See `alphabets.c` file.

---

## Sample Input

```text
Enter the character: a
```

## Sample Output

```text
Entered character is vowel
```

---

### Another Example

#### Input

```text
Enter the character: E
```

#### Output

```text
Entered character is vowel
```

---

### Another Example

#### Input

```text
Enter the character: z
```

#### Output

```text
Entered character is not a vowel
```

---

## Concepts Learned

- Functions in C
- Function Declaration
- Function Definition
- Function Calling
- Character Data Type (`char`)
- Conditional Statements (`if`, `else`)
- Logical OR Operator (`||`)
- Character Comparison
- User Input using `scanf()`

---

## Key Notes

- English has five vowels: **A, E, I, O, U**.
- Both uppercase and lowercase vowels should be checked.
- The logical OR operator (`||`) is used to compare the entered character with multiple vowel characters.
- Functions improve code readability, modularity, and reusability.
- This program demonstrates how functions and conditional statements work together to solve a simple character-checking problem.

---

## What I Learned Today

Today I learned how to use functions in C to check whether an entered character is a vowel or not. I practiced passing arguments to functions, comparing characters using conditional statements, and handling both uppercase and lowercase inputs. This program strengthened my understanding of functions, character data types, logical operators, and decision-making using `if-else`.

---

**Author:** Naveen  
**Day:** 28