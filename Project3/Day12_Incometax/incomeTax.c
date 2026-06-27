#include<stdio.h>
int main() {
    float annualIncome;
    float incomeTax;

    printf("Enter the total annual income :");
    scanf("%f",&annualIncome);

    printf("===================================================\n");
    printf("Total Annual Income before Tax : %.2f\n",annualIncome);

    if(annualIncome <= 250000) {

        incomeTax = 0.00;

    }
    else if(annualIncome <= 500000) {
        
        incomeTax = (annualIncome - 250000) * 0.05;
        
    }
    else if(annualIncome <= 1000000) {

        incomeTax = (250000 * 0.05) + (annualIncome - 500000) * 0.20;
       
    }
    else {

        incomeTax = (250000 * 0.05) + (500000 * 0.20) + (annualIncome - 1000000) * 0.30;

    }
    printf("Total Tax amount : %.2f\n",incomeTax);
    printf("Net income after tax : %.2f\n",annualIncome - incomeTax);
    printf("===================================================\n");
    return 0;

}