/*Write a C program to simulate a Movie Ticket Booking System.

The program should ask the user to enter their age and determine the ticket category based on the following conditions:

Child (Age < 13) → Ticket Price = ₹100
Adult (Age 13 to 59) → Ticket Price = ₹200
Senior Citizen (Age 60 and above) → Ticket Price = ₹150

The program should display:

Customer Category
Ticket Price*/

#include <stdio.h>
int main() {
    //declare variable 
    int age;

    //read age
    printf("Enter the age : ");
    scanf("%d", &age);

    // Determine ticket category
    if (age < 13) {

        printf("Ticket Category: Child.\n");
        printf("Ticket price   : 100 Rps.\n");

    }
    else if(age >= 13 && age < 60) {

        printf("Ticket Category: Adult.\n");
        printf("Ticket price   :200 Rps.\n");

    }    
    else if(age >= 60) {

        printf("Ticket Category:  Senior Citizen.\n");
        printf("Ticket price   : 150 Rps.\n");

    }
    else {
        printf("Invalid category.");
    }
    return 0;
}