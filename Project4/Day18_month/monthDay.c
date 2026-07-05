/*Write a C program that accepts a month number (1–12) from the user and displays the 
corresponding month name along with the number of days in that month using a switch statement.*/

#include<stdio.h>
int main () {
    int month;
    //Read user number
    printf("Enter the number of month(1 - 12): ");
    scanf("%d", &month);

    printf("========================================\n");
    printf("     The Information of month is \n");
    printf("========================================\n");
    //checks the numbres and prints the number of the days in that
    switch(month) {
        case 1: {
            printf("The month is January.\n");
            printf("The number of the days are: 31 days\n");
            break;
        }
        case 2: {

            printf("The month is February.\n");
            printf("The number of the days are: 28 days\n");
            break;

        }
        case 3: {

            printf("The month is March.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }
        case 4: {

            printf("The month is April.\n");
            printf("The number of the days are: 30 days\n");
            break;
            
        }
        case 5: {

            printf("The month is May.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }
        case 6: {

            printf("The month is June.\n");
            printf("The number of the days are: 30 days\n");
            break;
            
        }
        case 7: {

            printf("The month is July.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }
        case 8: {

            printf("The month is August.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }case 9: {

            printf("The month is September.\n");
            printf("The number of the days are: 30 days\n");
            break;
            
        }
        case 10: {

            printf("The month is October.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }case 11: {

            printf("The month is November.\n");
            printf("The number of the days are: 30 days\n");
            break;
            
        }
        case 12: {

            printf("The month is December.\n");
            printf("The number of the days are: 31 days\n");
            break;
            
        }
        default: printf("Invalid number.");
        
    }
printf("========================================\n");
return 0;
}