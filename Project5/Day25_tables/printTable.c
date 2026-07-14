/*Write a C program to print the multiplication table of a user-entered number using a function.

The program should:

Accept an integer from the user.
Pass the number to a user-defined function.
The function should print the multiplication table of the given number from 1 to 10.
Display each multiplication in the format:
number * i = result*/

#include<stdio.h>
void printTables(int num); //Fuction declaration
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printTables(num);    //function call

    return 0;

}
//Function Definition
void printTables(int num) {
    for(int i = 1; i <= 10; i++) {

        printf("%d * %d = %d\n", num, i, num * i);
    }
}