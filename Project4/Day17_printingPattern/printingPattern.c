#include<stdio.h>
int main () {
    int n;
    printf("Enter the size of the square : ");
    scanf("%d",&n);
    //Validate the zero and negative number
    if (n <= 0) {

        printf("Invalid number");

    }
    //Prints each row
    for (int i = 1; i <= n; i++) {
        //Prints stars in the column
        for (int j = 1; j <= n; j++) {

            printf("*");

        }
        printf("\n");
    }
    return 0;
}