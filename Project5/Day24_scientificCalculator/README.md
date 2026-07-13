# Day 24 - Scientific Calculator Using Functions

## Problem Statement

Write a C program to implement a **Scientific Calculator** using **functions**.

The program should:

* Accept two integers from the user.
* Perform basic arithmetic operations:

  * Addition
  * Subtraction
  * Multiplication
  * Division
  * Modulus
* Perform mathematical operations:

  * Power
  * Square
  * Cube
  * Percentage
* Implement each operation in a **separate function**.
* Display the result of every operation.

---

## Objective

* Learn how to create and use **functions** in C.
* Understand how function calls improve code readability and modularity.
* Practice using the `<math.h>` library.
* Perform different mathematical calculations using user-defined functions.
* Improve problem-solving skills by dividing a program into smaller reusable functions.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` and `math.h` header files.
3. Declare function prototypes for all calculator operations.
4. Define the `main()` function.
5. Declare two integer variables `a` and `b`.
6. Prompt the user to enter two numbers.
7. Read the input using `scanf()`.
8. Call each function one by one:

   * Addition
   * Subtraction
   * Multiplication
   * Division
   * Modulus
   * Power
   * Square
   * Cube
   * Percentage
9. Display the result returned by each function.
10. Return `0`.
11. End the program.

---

## Program Illustration

### Input

```text
Enter the value of a and b: 10 5
```

### Output

```text
The sum of two num is: 15
The subtraction of two num is: 5
The multiplication of two number is: 50
The division of two numb is: 2
The modular of two num is: 0
The power of the number is: 100000
The square of the number is: 100
The cube of the number is: 1000
The 10 percentage of the 200 is : 20
```

---

## Source Code

See **`scientificCalci.c`** file.

---

## Sample Input

```text
Enter the value of a and b: 8 3
```

## Sample Output

```text
The sum of two num is: 11
The subtraction of two num is: 5
The multiplication of two number is: 24
The division of two numb is: 2
The modular of two num is: 2
The power of the number is: 512
The square of the number is: 64
The cube of the number is: 512
The 8 percentage of the 200 is : 16
```

---

## Concepts Learned

* Functions in C
* Function Prototypes
* Function Calls
* Arithmetic Operators
* Modulus Operator (`%`)
* Mathematical Functions using `<math.h>`
* `pow()` Function
* User Input using `scanf()`
* Formatted Output using `printf()`

---

## Key Notes

* Each calculator operation is implemented in a **separate function**, making the program modular and easier to understand.
* The `pow()` function from the `<math.h>` library is used to calculate the power, square, and cube of a number.
* Division between two integers produces an integer result.
* The modulus (`%`) operator returns the remainder after division.
* The percentage calculation in this program finds the entered percentage of **200**.
* Function decomposition makes the program easier to maintain and extend with additional operations.

---

## What I Learned Today

Today I learned how to organize a C program using multiple functions. I understood how function prototypes, function definitions, and function calls work together. I also learned to use the `<math.h>` library and the `pow()` function to perform mathematical operations such as power, square, and cube. This project strengthened my understanding of modular programming and code reusability.

---

## Author

**Naveen**

**Day:** 24
