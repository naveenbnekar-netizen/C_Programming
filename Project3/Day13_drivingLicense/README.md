# Day 13 - Driving License Eligibility Checker

## Problem Statement

Write a C program to determine whether an applicant is eligible to apply for a driving license.

The program should accept the applicant's age, vision test result, and document verification status from the user. Based on these inputs, the program should determine whether the applicant is eligible for a driving license and display the appropriate status along with the reason if they are not eligible.

The program also validates the user's input for the vision test and document verification fields.

---

## Objective

* Learn how to use nested `if` statements.
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

   * Applicant's age
   * Vision test result
   * Document verification status
5. Accept the inputs from the user.
6. Display the program heading.
7. Check whether the applicant is **18 years or older**.
8. If the applicant is under 18:

   * Display **Not Eligible**.
   * Display the reason that the applicant must be at least 18 years old.
9. Otherwise:

   * Display the applicant's age.
   * Validate the vision and document inputs.
10. If either input is invalid:

    * Display **Invalid Input**.
11. Otherwise, check the following conditions:

    * Vision Passed and Documents Verified → Eligible.
    * Vision Failed and Documents Verified → Not Eligible (Vision Test Failed).
    * Vision Passed and Documents Missing → Not Eligible (Document Verification Failed).
    * Vision Failed and Documents Missing → Not Eligible (Both Vision Test and Document Verification Failed).
12. Display the closing line.
13. Return `0`.
14. End the program.

---

## Eligibility Criteria

| Condition                                   | Status        |
| ------------------------------------------- | ------------- |
| Age ≥ 18, Vision Passed, Documents Verified | Eligible      |
| Age < 18                                    | Not Eligible  |
| Vision Test Failed                          | Not Eligible  |
| Documents Missing                           | Not Eligible  |
| Vision Test Failed & Documents Missing      | Not Eligible  |
| Invalid Vision or Document Input            | Invalid Input |

---

## Source Code

See `drivingLicenseEligibilityChecker.c` in this folder.

---

## Sample Input

```text
Enter the age : 22
Enter the vision test result (passed = 1, failed = 0) : 1
Enter the document verification (passed = 1, failed = 0) : 1
```

## Sample Output

```text
==================================================
Driving License Eligibility Checker
==================================================
Age         : 22
Vision test : Passed
Documents   : Verified
STATUS      : Eligible
==================================================
```

---

### Another Example

#### Input

```text
Enter the age : 24
Enter the vision test result (passed = 1, failed = 0) : 0
Enter the document verification (passed = 1, failed = 0) : 1
```

#### Output

```text
==================================================
Driving License Eligibility Checker
==================================================
Age         : 24
STATUS      : NOT Eligible
REASON      : Vision test failed
==================================================
```

---

### Another Example

#### Input

```text
Enter the age : 20
Enter the vision test result (passed = 1, failed = 0) : 1
Enter the document verification (passed = 1, failed = 0) : 0
```

#### Output

```text
==================================================
Driving License Eligibility Checker
==================================================
Age         : 20
STATUS      : NOT Eligible
REASON      : Documents verification failed
==================================================
```

---

### Another Example

#### Input

```text
Enter the age : 25
Enter the vision test result (passed = 1, failed = 0) : 0
Enter the document verification (passed = 1, failed = 0) : 0
```

#### Output

```text
==================================================
Driving License Eligibility Checker
==================================================
Age         : 25
STATUS      : NOT Eligible
REASON      : Vision test and Documents verification failed
==================================================
```

---

### Another Example

#### Input

```text
Enter the age : 17
Enter the vision test result (passed = 1, failed = 0) : 1
Enter the document verification (passed = 1, failed = 0) : 1
```

#### Output

```text
==================================================
Driving License Eligibility Checker
==================================================
STATUS      : NOT ELIGIBLE
REASON      : Applicant must be at least 18 years old
==================================================
```

---

### Invalid Input Example

#### Input

```text
Enter the age : 22
Enter the vision test result (passed = 1, failed = 0) : 5
Enter the document verification (passed = 1, failed = 0) : -1
```

#### Output

```text
==================================================
Driving License Eligibility Checker
==================================================
Age         : 22
Invalid Input
==================================================
```

---

## Concepts Learned

* Nested `if` Statements
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

* The applicant must be at least **18 years old**.
* Vision test and document verification must both be successful to be eligible.
* Invalid input values are detected before eligibility is checked.
* The program uses nested conditional statements to implement real-world decision-making.
* Every possible combination of valid inputs is handled.

---

## What I Learned Today

Today I learned how to solve a real-world eligibility problem using nested `if` statements in C. I practiced combining multiple conditions using logical operators (`&&` and `||`), validating user input, and displaying appropriate messages based on different scenarios. This project improved my understanding of conditional logic, input validation, and writing structured C programs.

**Author:** Naveen
**Day:** 13
