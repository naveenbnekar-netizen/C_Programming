/*Write a C program to perform basic arithmetic operations using a calculator.

The program should accept two numbers and an operator from the user. Based on the operator entered, the program should perform the corresponding calculation and display the result.

Supported operations:

Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)
Modulus (%) */

#include<stdio.h>
int main(){
    int num1,num2;

    //Read the input from the user

    printf("Enter the num1 :");
    scanf("%d",&num1);

    printf("Enter the num2 :");
    scanf("%d",&num2);


    int add = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;

    //Displaying the values of calcuation on the screen
    
    printf("\nThe result of the addition       = %d\n",add);
    printf("The result of the subtraction    = %d\n",sub);
    printf("The result of the multiplication = %d\n",mul);
    printf("The result of the division       = %d\n",div);
    printf("The result of the modulus        = %d\n",mod);

    return 0;

}