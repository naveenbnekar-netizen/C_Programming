/*Write a C program to calculate the approximate age of a person based on their Date of Birth (DOB).

The program should accept the user's birth year and calculate the age using the current year.*/

#include<stdio.h>
int main(){
    //Initialize variables

    int birthYear, currentYear, age;
    
    //Read the birth year and current year from the user
    printf("Enter the birth year: ");
    scanf("%d", &birthYear);

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    //Formula to calculate the age
    age = currentYear - birthYear;

    // Display the calculated age

    printf("The age of the person is: %d years\n",age);
    return 0;
    
}