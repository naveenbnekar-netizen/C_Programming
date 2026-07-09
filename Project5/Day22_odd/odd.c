/*Write a C program to print all odd numbers from 1 up to a user-entered positive integer using a while loop.

The program should:

Accept a positive integer N from the user.
Use a while loop to iterate from 1 to N.
Check whether each number is odd using the modulus (%) operator.
Print all odd numbers, each on a new line. */ 

#include<stdio.h>
int main() {
    int num;
    int i =1;
    printf("Enter a number: ");
    scanf(" %d", &num );
    while(i <= num) {
        if(i % 2 != 0) {
            printf("%d \n", i);
        }
        i ++;
    }
return 0;
}