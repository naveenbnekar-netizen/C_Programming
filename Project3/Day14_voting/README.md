# Day 14 - Voting Eligibility System

## Problem Statement

Write a C program to determine whether a person is eligible to vote.

The program should accept the person's age, citizenship status, and Voter ID availability from the user. Based on these inputs, the program should determine whether the person is eligible to vote and display the appropriate status along with the reason if they are not eligible.

The program also validates the user's input for the citizenship status and Voter ID fields.

---

## Objective

* Learn how to use `if`, `else if`, and `else` statements.
* Practice combining multiple conditions using logical operators (`&&` and `||`).
* Validate user input before processing.
* Improve decision-making skills in C programming.
* Display formatted output using `printf()`.

---

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare variables for:

   * Person's age
   * Citizenship status
   * Voter ID availability
5. Accept the inputs from the user.
6. Display the program heading.
7. Validate the citizenship status and Voter ID inputs.
8. If either input is invalid:

   * Display **Invalid Input**.
9. Otherwise, check the following conditions:

   * Age ≥ 18, Citizen, and Voter ID Available → Eligible.
   * Age < 18 → Not Eligible.
   * Not a Citizen → Not Eligible.
   * Voter ID Not Available → Not Eligible.
   * If multiple conditions are not satisfied, display all applicable reasons.
10. Display the closing line.
11. Return `0`.
12. End the program.

---

## Eligibility Criteria

| Condition                               | Status        |
| --------------------------------------- | ------------- |
| Age ≥ 18, Citizen = Yes, Voter ID = Yes | Eligible      |
| Age < 18                                | Not Eligible  |
| Not a Citizen                           | Not Eligible  |
| Voter ID Not Available                  | Not Eligible  |
| Invalid Citizenship or Voter ID Input   | Invalid Input |

---

## Source Code

See `voting.c` in this folder.

---

## Sample Input

```text
Enter the age : 22
Enter the Citizenship status (Yes = 1 and No = 0) : 1
Enter the availability of the Voter ID (Yes = 1 and No = 0) : 1
```

## Sample Output

```text
============================================
           Voting Eligibility
============================================
Age           : 22
Citizen       : YES
Voter ID      : YES

Voting Status : Eligible
============================================
```

---

### Another Example

#### Input

```text
Enter the age : 24
Enter the Citizenship status (Yes = 1 and No = 0) : 0
Enter the availability of the Voter ID (Yes = 1 and No = 0) : 1
```

#### Output

```text
============================================
           Voting Eligibility
============================================
Age           : 24
Citizen       : NO
Voter ID      : YES

Voting Status : Not Eligible
Reason        : Not a citizen
============================================
```

---

### Another Example

#### Input

```text
Enter the age : 21
Enter the Citizenship status (Yes = 1 and No = 0) : 1
Enter the availability of the Voter ID (Yes = 1 and No = 0) : 0
```

#### Output

```text
============================================
           Voting Eligibility
============================================
Age           : 21
Citizen       : YES
Voter ID      : NO

Voting Status : Not Eligible
Reason        : Valid Voter ID is required.
============================================
```

---

### Another Example

#### Input

```text
Enter the age : 16
Enter the Citizenship status (Yes = 1 and No = 0) : 0
Enter the availability of the Voter ID (Yes = 1 and No = 0) : 0
```

#### Output

```text
============================================
           Voting Eligibility
============================================
Age           : 16
Citizen       : NO
Voter ID      : NO

Voting Status : Not Eligible
Reason        : Person must be at least 18 years old.
Reason        : Not a citizen.
Reason        : Valid Voter ID is required.
============================================
```

---

### Invalid Input Example

#### Input

```text
Enter the age : 22
Enter the Citizenship status (Yes = 1 and No = 0) : 5
Enter the availability of the Voter ID (Yes = 1 and No = 0) : -1
```

#### Output

```text
============================================
           Voting Eligibility
============================================
Age           : 22
Invalid Input
============================================
```

---

## Concepts Learned

* `if`, `else if`, and `else`
* Logical Operators (`&&`, `||`)
* Relational Operators (`>=`, `!=`)
* Input Validation
* Decision Making
* Variables and Data Types
* User Input using `scanf()`
* Output Formatting using `printf()`

---

## Key Notes

* A person must be at least **18 years old** to vote.
* The person must be a **citizen**.
* A **valid Voter ID** is required.
* Invalid input values are detected before eligibility is checked.
* The program handles every valid combination of inputs and displays the appropriate reason(s) when the applicant is not eligible.

---

## What I Learned Today

Today I learned how to solve a real-world eligibility problem using conditional statements in C. I practiced combining multiple conditions using logical operators (`&&` and `||`), validating user input, and displaying meaningful messages for different eligibility scenarios. This project improved my understanding of decision-making, input validation, and writing structured C programs.

**Author:** Naveen
**Day:** 14
