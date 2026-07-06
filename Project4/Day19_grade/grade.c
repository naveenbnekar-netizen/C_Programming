#include<stdio.h>
int main() {
    char grade;
    printf("Enter the grade (A, B, C, D, F): ");
    scanf(" %c", &grade);
    
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