# Income Tax Calculator in C

A simple C program that calculates the income tax based on annual income using a slab-based tax system. It also displays the total tax amount and the net annual income after deducting tax.

---

## Problem Statement

Write a C program to calculate the income tax based on the annual income of a person.

The program should:

- Accept the annual income from the user.
- Calculate the tax according to predefined income tax slabs.
- Display the total tax amount.
- Display the net income after deducting the tax.

---

## Objective

- Practice `if-else if` conditional statements.
- Learn slab-based calculations.
- Understand arithmetic operations in C.
- Improve user input and formatted output skills.

---

## Tax Slabs Used

| Annual Income (₹)       | Tax Rate |
|-------------------------|----------|
| Up to ₹2,50,000         |     0%   |
| ₹2,50,001 – ₹5,00,000   |     5%   |
| ₹5,00,001 – ₹10,00,000  |     20%  |
| Above ₹10,00,000        |     30%  |

---

## Sample Input

```
Enter the total annual income:
750000
```

##  Sample Output

```
===================================================
Total Annual Income before Tax : 750000.00
Total Tax amount : 62500.00
Net income after tax : 687500.00
===================================================
```

---

##  Formula Used

### Slab 1
```
Income ≤ ₹2,50,000
Tax = ₹0
```

### Slab 2
```
Tax = (Income - 250000) × 5%
```

### Slab 3
```
Tax = (250000 × 5%) + (Income - 500000) × 20%
```

### Slab 4
```
Tax = (250000 × 5%) + (500000 × 20%) + (Income - 1000000) × 30%

```





---

## Concepts Covered

- Variables
- Input/Output (`scanf`, `printf`)
- Arithmetic Operators
- Conditional Statements (`if-else if`)
- Tax Slab Calculation
- Formatted Output

---

## Future Improvements

- Validate negative income values.
- Add the latest tax slabs.
- Allow users to calculate tax for multiple people.
- Display effective tax percentage.
- Add Old Tax Regime and New Tax Regime options.

---

##  Author
Naveen Nekar
