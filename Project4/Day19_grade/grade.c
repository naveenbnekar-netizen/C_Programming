#include<stdio.h>
int main() {
    // Variable to store the grade entered by the user
    char grade;

    // Prompt the user to enter a grade
    printf("Enter the grade (A, B, C, D, F): ");
    scanf(" %c", &grade);
    
    // Check the entered grade using a switch statement
    switch(grade) {
        case 'A' : case 'a' : {
            printf("Excellemnt \n");
            break;
        }
        case 'B' : case 'b' : {
            printf("Very Good \n");
            break;

        }
        case 'C' : case 'c' : {
            printf("Good \n");
            break;

        }
        case 'D' : case 'd' : {
            printf("Average \n");
            break;

        }
        case 'E' : case 'e' : {
            printf("Fail \n");
            break;
        }
        default : {
            printf("Invalid grade \n");
            break;

        }
    }
    return 0;
}