# ATM Machine Simulator

## Overview

This project is a simple ATM Machine Simulator developed in C. It allows users to perform basic banking operations such as checking account balance, depositing money, withdrawing money, and exiting the application.

The program uses conditional statements (`if`, `else if`, and `else`) to process user choices and perform the corresponding operations.

## Features

* Check account balance
* Deposit money into the account
* Withdraw money from the account
* Validate available balance before withdrawal
* Exit the application
* Handle invalid menu selections

## Technologies Used

* C Programming Language
* Standard Input/Output Library (`stdio.h`)

## Problem Statement

Write a C program to simulate a simple ATM machine. Display a menu with options to check balance, deposit money, withdraw money, and exit. The program should perform the selected operation using conditional statements and update the account balance accordingly. If the withdrawal amount exceeds the available balance, display an appropriate message.

## Menu

```text
======= ATM MENU =======
1. Balance
2. Deposit
3. Withdrawal
4. Exit
========================
```

## Sample Output

### Check Balance

```text
Enter the choice number: 1
The balance is: 5000.00
```

### Deposit Money

```text
Enter the choice number: 2
Enter the deposit amount: 1000
Deposit successfully, New balance is: 6000.00
```

### Withdraw Money

```text
Enter the choice number: 3
Enter the withdrawal amount: 2000
Withdrawal successful, the remaining balance is: 3000.00
```

### Insufficient Balance

```text
Enter the choice number: 3
Enter the withdrawal amount: 7000
Insufficient bank balance
```

## Concepts Practiced

* Variables and Data Types
* User Input and Output
* Conditional Statements (`if`, `else if`, `else`)
* Nested `if` Statements
* Arithmetic Operations



## Learning Outcome

By completing this project, you will understand how to use conditional statements to implement menu-driven programs and perform decision-making operations in C.

---

**Day 09 - ATM Machine Simulator**
