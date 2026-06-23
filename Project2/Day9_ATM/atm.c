/*Write a C program to simulate a simple ATM machine. Display a menu with options to check balance, 
deposit money, withdraw money, and exit. The program should perform the selected operation using
conditional statements and update the account balance accordingly. If the withdrawal amount exceeds 
the available balance, display an appropriate message. */

#include<stdio.h>
int main(){
    //Declare the variables 
    float balance = 5000;
    int choice;
    float amount;

    //Display the menu of the ATM
    printf("=======ATM MENU=======\n");
    printf("1) Balance \n");
    printf("2) Deposit \n");
    printf("3) Withdrawal\n");
    printf("4) Exit \n");
    printf("=======================\n");

    //Read the choice of the user
    printf("Enter the choice number: ");
    scanf("%d", &choice);


    //Check the user entered choice
    if(choice == 1){
        printf("The balance is: %f",balance);

    }
    else if(choice == 2){
        printf("Enter the deposit amount: ");
        scanf("%f",&amount);

        balance = balance + amount;

        printf("Deposit sucessfully, New balance is: %.2f",balance);

    }
    else if(choice == 3){

        printf("Enter the withdrawal amount: ");
        scanf("%f",&amount);

        if(balance >= amount){
            balance = balance - amount;
            printf("Withdrawal sucessfulll, the remaining balance is: %.2f",balance);
        
        }
        else{
            printf("Insuficient bank balance");

        }
    }
    else if(choice == 4){
        printf("Thanks for using the ATM");
    }
    else{
        printf("Invalid choice");

    }
    return 0;
}