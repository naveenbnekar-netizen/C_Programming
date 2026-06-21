/*Write a C program to calculate the Total Marks, Average Marks, and Percentage of a student.

The program should accept marks obtained in 5 subjects from the user. After receiving the marks, calculate and display:

Total Marks
Average Marks
Percentage

Assume each subject is out of 100 marks.*/

#include<stdio.h>
int main(){
    int Kannada,English,Maths,Science,Social,total;
    float average,percentage;

    //Read marks obtained in 5 subjects from the user
    printf("Enter marks of Kannada: ");
    scanf("%d",&Kannada);
    printf("Enter marks of English: ");
    scanf("%d",&English);
    printf("Enter marks of Maths: ");
    scanf("%d",&Maths);
    printf("Enter marks of Science: ");
    scanf("%d",&Science);
    printf("Enter marks of Social: ");
    scanf("%d",&Social);

    total = Kannada + English + Maths + Science + Social;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    //Display the results
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}