# Reverse a Number in C

A simple C program that reverses the digits of an integer entered by the user using a `for` loop.

---

## Problem Statement

Write a C program to reverse the digits of a given integer.

The program should:

- Accept an integer from the user.
- Extract each digit using the modulus (`%`) operator.
- Reverse the number using arithmetic operations.
- Display the reversed number.

---

## Objective

- Practice `for` loops.
- Understand digit extraction using the modulus (`%`) operator.
- Learn how to reverse a number using arithmetic operations.
- Improve user input and output handling in C.

---

## Algorithm

1. Read an integer from the user.
2. Initialize the reversed number to `0`.
3. Repeat until the number becomes `0`:
   - Extract the last digit using `% 10`.
   - Append the digit to the reversed number.
   - Remove the last digit using `/ 10`.
4. Display the reversed number.

---

## Sample Input

```text
Enter a number:
12345
```

## Sample Output

```text
Reversed number = 54321
```

---

## Logic Used

### Step 1

```
Extract the last digit

remainder = num % 10
```

### Step 2

```
Append the digit to the reversed number

reverse = reverse * 10 + remainder
```

### Step 3

```
Remove the last digit

num = num / 10
```

These three steps are repeated until the original number becomes `0`.

---

## Dry Run

For input:

```
1234
```

| Iteration | num | remainder | reverse |
|-----------|-----|-----------|---------|
| 1 | 1234 | 4 | 4 |
| 2 | 123 | 3 | 43 |
| 3 | 12 | 2 | 432 |
| 4 | 1 | 1 | 4321 |

Final Output:

```
Reversed number = 4321
```

---

## Concepts Covered

- Variables
- Input/Output (`scanf`, `printf`)
- `for` Loop
- Arithmetic Operators (`%`, `/`, `*`, `+`)
- Digit Extraction
- Number Manipulation

---

## Future Improvements

- Handle negative numbers correctly.
- Check whether the number is a palindrome.
- Reverse very large numbers using strings.
- Count the number of digits before reversing.
- Create a menu-driven program with multiple number operations.

---

## Author

**Naveen Nekar**
DAY : 23