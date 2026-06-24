/*Write a C program to calculate the total electricity bill based on the number of units consumed by a customer.*/


#include<stdio.h>
int main(){
    /* Variable Declarations */
    int unitsConsumed;
    float billAmount;
    float cost_per_unit = 6.50;

    /* User Input */
    printf("Enter the units consumed: ");
    scanf("%d", &unitsConsumed);

    /* Bill Calculation */
    billAmount = unitsConsumed * cost_per_unit;

    /* Display Result */
    printf("\n----- ELECTRICITY BILL -----\n");
    printf("Units Consumed : %d\n", unitsConsumed);
    printf("Cost Per Unit  : Rs %.2f\n", cost_per_unit);
    printf("Total Bill     : Rs %.2f\n", billAmount);
    return 0;


}