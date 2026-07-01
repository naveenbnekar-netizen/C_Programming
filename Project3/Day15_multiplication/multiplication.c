/*Write a C program to generate the multiplication table of a given number.
The program should accept an integer from the user and display its multiplication table from 1 to 10 in a clear and formatted manner.*/
#include<stdio.h>
int main() {
    int num;
    //Reading value from the user

    printf("Enter and integr : ");
    scanf("%d",&num);

    printf("==================================\n");
    printf("Multiplication table of %d\n",num);
    printf("==================================\n");
//using the for loop to generate the multiplication table
    for(int i = 1; i<= 10; i++) {

        printf("%d * %d = %d\n",num,i,num*i);

    }
     printf("==================================\n");
     return 0;
}