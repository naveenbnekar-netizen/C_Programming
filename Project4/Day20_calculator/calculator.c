/*Write a C program that performs basic arithmetic operations using a switch statement.
The program read the user values and oerator(+, -, *, /, or %).
Based on the operator entered by the user, the program should perform the corresponding 
arithmetic operation and display the result.*/

#include <stdio.h>
int main() {
    //declared the variables 
    int a, b;
    char operator;
    //read user values and operator 
    printf("Enter the first number:\n");
    scanf(" %d", &a);

    printf("Enter the second number:\n");
    scanf(" %d", &b);

    printf("Enter the operator:\n");
    scanf(" %c", &operator);

        //checks the condiation 
    switch(operator) {
        case '+' : {
            printf("The sum of %d and %d is: %d ", a, b, a + b);
            break;
        }
        case '-' : {
            printf("The difference of %d and %d is: %d ",a, b, a-b);
            break;

        }
        case '*' : {
            printf("The product of %d and %d is: %d ", a, b, a * b);
            break;
        }
        case '/' : {
            printf("The division of %d and %d is: %d ",a, b, a/b);
            break;

        }
        case '%' : {
            printf("The modular of %d and %d is: %d ", a, b, a % b);
            break;
        }
        default : {
            printf("Enterd invalid operator");
        }
    }
return 0;
}