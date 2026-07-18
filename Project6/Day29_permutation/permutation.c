/*Write a C program to calculate the **Permutation** of two numbers (`n` and `r`) using loops.

The program should accept the values of `n` and `r` from the user, calculate the factorial of `n` and `(n-r)`,
 and then compute the permutation using the formula:

**P(n, r) = n! / (n - r)!***/


#include<stdio.h>
int main() {
    int n, r, fact_n = 1,fact_nr = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    for(int i = 1; i <= n; i++) {
        fact_n = fact_n * i;
     
    }

    int nr = n - r;
    
    for(int j = 1; j <= nr; j++) {
        fact_nr = fact_nr * j;
     
    }
    int permutation = fact_n / fact_nr;
    printf("Permutation of %d and %d is: %d", n, r, permutation);
    return 0;
}