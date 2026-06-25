# Day 11 - Movie Ticket Booking System

## Problem Statement

Write a C program to simulate a Movie Ticket Booking System.

The program should accept the customer's age and determine the ticket category and ticket price based on the following conditions:

* Child (Age less than 13) → ₹100
* Adult (Age 13 to 59) → ₹200
* Senior Citizen (Age 60 and above) → ₹150

The program should display:

* Ticket Category
* Ticket Price

## Objective

* Learn how to use conditional statements (`if`, `else if`, `else`) in C.
* Practice making decisions based on user input.
* Understand how to compare values using relational operators.
* Display formatted output using `printf()`.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare a variable to store the customer's age.
5. Prompt the user to enter their age.
6. Read the age using `scanf()`.
7. Check if the age is less than 13.

   * If true, display **Child** category and ticket price as **₹100**.
8. Otherwise, check if the age is between 13 and 59.

   * If true, display **Adult** category and ticket price as **₹200**.
9. Otherwise, check if the age is 60 or above.

   * If true, display **Senior Citizen** category and ticket price as **₹150**.
10. If none of the conditions match, display an appropriate message.
11. Return `0`.
12. End the program.

## Ticket Pricing

### Child

Age < 13 → ₹100

### Adult

Age 13 to 59 → ₹200

### Senior Citizen

Age ≥ 60 → ₹150

## Source Code

See `movieTicket.c` in this folder.

## Sample Input

```text
Enter the age: 25
```

## Sample Output

```text
Ticket Category: Adult
Ticket Price   : 200 Rs.
```

### Another Example

#### Input

```text
Enter the age: 10
```

#### Output

```text
Ticket Category: Child
Ticket Price   : 100 Rs.
```

### Another Example

#### Input

```text
Enter the age: 65
```

#### Output

```text
Ticket Category: Senior Citizen
Ticket Price   : 150 Rs.
```

## Concepts Learned

* Conditional Statements (`if`, `else if`, `else`)
* Relational Operators (`<`, `>=`)
* Variables and Data Types
* User Input using `scanf()`
* Decision Making in C
* Output Formatting using `printf()`

## Key Notes

* The program categorizes customers based on their age.
* Ticket prices are assigned according to the customer's category.
* The conditions are evaluated from top to bottom.
* Only one category is displayed for each customer.
* This project demonstrates the practical use of conditional statements in C programming.

## What I Learned Today

Today I learned how to use conditional statements to make decisions in a C program. I practiced checking multiple conditions using `if`, `else if`, and `else` to categorize customers based on their age and display the appropriate ticket price. This project helped me understand decision-making logic and improved my ability to write structured programs.

**Author:** Naveen
**Day:** 11
