#include <stdio.h>

// Function declaration
void printNumbers(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}

void printNumbers(int n) {
    // base case
    if (n == 0) {
        return;
    }

    // recursive call
    printNumbers(n - 1);

    // Print after the recursive call
    printf("%d ", n);
}