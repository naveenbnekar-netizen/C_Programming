//Write a C program to convert temperature between Celsius and Fahrenheit.
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    //Read the temperature by user 
    printf("Enter the temperature in celsius :");
    scanf(" %f", &celsius);

    //celsius to fahrenheit conversion

    fahrenheit = ((9.0  / 5.0 )* celsius) + 32 ;

    //Displaying the temperature value on the screen

    printf("The temperature value in the fahrenheit is : %f F",fahrenheit );
    return 0;

}