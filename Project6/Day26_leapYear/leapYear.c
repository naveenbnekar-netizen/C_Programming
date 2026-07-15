/*Write a C program to check whether a given year is a **Leap Year** or **Not a Leap Year** using **functions**.

The program should accept a year from the user, pass it to a function, and display whether the entered year is a leap year.*/

#include<stdio.h>
void yearCheck(int year);    //Defining th function
int main(){
    int year;
    //Reading the year from user
    printf("Enter the year: ");
    scanf("%d", &year);
    //calling the function
    yearCheck(year);

return 0;
}
//Function definition
void yearCheck(int year){
    if(year % 400 == 0){

        printf("Entered year is Leap year");

    }
    else if(year % 4 == 0 && year % 100 != 0){

        printf("Entered year is leap year");
        
    }
    else{

        printf("Entered year is not a leap year");

    }
}