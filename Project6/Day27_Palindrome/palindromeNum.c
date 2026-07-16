
#include<stdio.h>
void palindromeCheck(int num);
int main(){
    int num;

    printf("Enter the num: ");
    scanf("%d", &num);

    palindromeCheck(num);

return 0;
}

void palindromeCheck(int num){
    int original = num;

    int reverse = 0, remainder;
    while(num != 0) {

        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10 ;

    }
    if(reverse != original ) {

        printf("Not Palindrome %d", reverse);

    }
    else{

        printf(" palindrome: %d", reverse);

    }  
}