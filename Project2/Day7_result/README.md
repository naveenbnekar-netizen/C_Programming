# Day 07 - Percentage Calculator

## Problem Statement

Write a C program to calculate the Total Marks, Average Marks, and Percentage of a student.

The program should accept marks obtained in 5 subjects from the user and calculate the following:

* Total Marks
* Average Marks
* Percentage

Assume each subject is out of 100 marks.

## Objective

* Learn how to accept multiple inputs from the user.
* Practice using arithmetic operations in C.
* Understand how to calculate totals, averages, and percentages.
* Display formatted output using `printf()`.

## Algorithm

1. Start the program.
2. Include the `stdio.h` header file.
3. Define the `main()` function.
4. Declare variables for marks in five subjects.
5. Prompt the user to enter marks for each subject.
6. Read the inputs using `scanf()`.
7. Calculate the total marks by adding all subject marks.
8. Calculate the average marks by dividing the total by 5.
9. Calculate the percentage using the total marks obtained out of 500.
10. Display the total marks, average marks, and percentage.
11. Return `0`.
12. End the program.

## Formulas Used

### Total Marks

Total = Kannada + English + Maths + Science + Social

### Average Marks

Average = Total ÷ 5

### Percentage

Percentage = (Total ÷ 500) × 100

## Source Code

See `student_result.c` in this folder.

## Sample Input

```text
Enter marks of Kannada: 85
Enter marks of English: 78
Enter marks of Maths: 92
Enter marks of Science: 88
Enter marks of Social: 80
```

## Sample Output

```text
Total Marks: 423
Average Marks: 84.60
Percentage: 84.60%
```

## Concepts Learned

* Variables and Data Types
* User Input using `scanf()`
* Arithmetic Operations
* Total and Average Calculation
* Percentage Calculation
* Output Formatting using `printf()`

## Key Notes

* The program assumes that each subject is out of 100 marks.
* Total marks are calculated out of 500.
* Average is calculated by dividing the total marks by 5.
* Percentage and average are stored as floating-point values for accuracy.
* Using `5.0` and `500.0` ensures floating-point division.

## What I Learned Today

Today I learned how to accept multiple inputs from the user and perform calculations such as total marks, average marks, and percentage. I also practiced using integer and floating-point variables together to obtain accurate results and display them in a formatted manner.

**Author:** Naveen
**Day:** 07
