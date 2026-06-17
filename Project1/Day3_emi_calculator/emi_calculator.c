/*Write a C program to calculate the Interest Amount, Total Amount, and Monthly EMI for a loan.
The program should accept the following inputs from the user:
    - Principal Amount (Loan Amount)
    - Rate of Interest (Annual Interest Rate)
    - Time Period (in Years)
Using the given inputs, calculate:
    - Interest Amount
    - Total Amount to be Repaid
    - Monthly EMI */

    #include<stdio.h>
    int main(){
        int principal_amt, time_period,rate_of_interest,total_amt, simple_interest,monthly_emi;
        //read the pricipal amount,rate of interest and time period form the user.
        printf("Enter the principal amount : ");
        scanf(" %d",&principal_amt);

        printf("Enter the time period : ");
        scanf(" %d",&time_period);

        printf("Enter the rate of interest : ");
        scanf(" %d",&rate_of_interest);

        simple_interest = ((principal_amt * time_period * rate_of_interest) / 100);

        total_amt = principal_amt + simple_interest;

        monthly_emi = total_amt / (time_period * 12);
        //Displaying calculated simple interest,total amount and monthly emi in a need formate

        printf("\nThe Simple interest is : %d\n", simple_interest);

        printf("The Total amount is    : %d\n",total_amt);

        printf("The monthly EMI is     : %d\n",monthly_emi);

        return 0;


    
    }