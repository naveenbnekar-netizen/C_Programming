# Day 21 - Print Uppercase Alphabets Using While Loop

## Problem Statement

Write a C program to print all uppercase English alphabets from **A to Z** using a `while` loop.

The program should initialize a character variable with `'A'` and continuously print each alphabet until `'Z'` is reached.

## Objective

* Learn how to use the `while` loop in C.
* Understand character data types and ASCII values.
* Practice incrementing character variables.
* Display formatted output using `printf()`.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare a character variable `ch` and initialize it with `'A'`.
5. Display a heading message.
6. Use a `while` loop that runs until `ch` becomes greater than `'Z'`.
7. Inside the loop:
   * Print the current alphabet.
   * Increment the character variable using `ch++`.
8. End the loop after printing all uppercase alphabets.
9. Return `0`.
10. End the program.

## Program Logic

* Initialize the character with `'A'`.
* Print the current character.
* Increment the character to the next alphabet.
* Continue until `'Z'` is printed.

## Source Code

See `uppercaseAlphabets.c` in this folder.

## Sample Output

```text
Uppercase Alphabets are:

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```

## Concepts Learned

* `while` Loop
* Character Data Type (`char`)
* ASCII Character Sequence
* Increment Operator (`++`)
* Loop Control
* Output Formatting using `printf()`

## Key Notes

* Characters in C are stored using their ASCII values.
* The uppercase letters `'A'` to `'Z'` have consecutive ASCII values.
* Incrementing a character variable (`ch++`) moves it to the next ASCII character.
* The loop continues until the condition `ch <= 'Z'` becomes false.
* This program demonstrates that loops can be used with character variables, not just integers.

## What I Learned Today

Today I learned how to use a `while` loop with character variables in C. I understood that characters are internally represented using ASCII values, allowing them to be incremented just like integers. This project improved my understanding of loop execution, character manipulation, and how to print a sequence of uppercase alphabets efficiently.

**Author:** Naveen  
**Day:** 21