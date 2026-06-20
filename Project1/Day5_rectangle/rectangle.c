/*Write a C program to calculate the Area of a Rectangle and Primeter of the Rectangle.
The program should accept the following inputs from the user:

Length of the rectangle
Breadth (Width) of the rectangle

Using the given inputs, calculate and display the Area of the Rectangle and the perimeter of the Rectangle.*/

#include<stdio.h>
int main (){
    int length ,breadth;

    //Taking values from the user
    printf("Enter the length of the rectangle :");
    scanf("%d",&length);

    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    //Displaying the area and the perimeter of the rectangle 

    printf("The Area of the rectangle = %d  m²\n",area);
    printf("The Perimeter of the rectangle = %d  m\n",perimeter);
    return 0;


}