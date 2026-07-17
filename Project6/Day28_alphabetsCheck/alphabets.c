/*Write a C program to check whether a given character is a **Vowel** or **Not a Vowel** using **functions**.

The program should accept a character from the user, pass it to a user-defined function, and determine whether the entered character is one of the English vowels 
(`A`, `E`, `I`, `O`, `U` or `a`, `e`, `i`, `o`, `u`).*/


#include<stdio.h>
void vowelCheck(char ch);   //function declaration
int main(){
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    vowelCheck(ch);
return 0;
}
//function definition
void vowelCheck(char ch){
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){

        printf("Entered character is vowel");

    }
    else{

        printf("Entered character is not a vowel");
        
    }
}