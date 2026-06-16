/*Develop a Student Information System that accepts and stores basic details of a student.
 The program should prompt the user to enter the following information:

Student Name
USN (University Seat Number)
Branch
Age
CGPA

After collecting the details, display all the information in a neatly formatted output.*/

#include<stdio.h>
int main(){
    char NAME[100];
    char USN[20];
    char BRANCH[10];
    int AGE;
    float CGPA;
    //Take the information form the user using scanf statement
    printf("Enter the name of the student :\n");
    scanf("%s",NAME);
    printf("Enter the USN of the student :\n");
    scanf("%s",USN);
    printf("Enter the branch of the student :\n");
    scanf("%s",BRANCH);
    printf("Enter the age of the student :\n");
    scanf("%d",&AGE);
    printf("Enter the CGPA of the student :\n");
    scanf("%f",&CGPA);
    //now it prints the taken information in the terminal which is taken by the user in the oranized manner.
    printf("------------------------------\n");
    printf("STUDENT DETAILS\n");
    printf("------------------------------\n");
    printf("NAME     : %s\n",NAME);
    printf("USN      : %s\n",USN);
    printf("BRANCH   : %s\n",BRANCH);
    printf("AGE      : %d\n",AGE);
    printf("CGPA     : %.2f\n",CGPA);
    printf("------------------------------\n");
    return 0;


}