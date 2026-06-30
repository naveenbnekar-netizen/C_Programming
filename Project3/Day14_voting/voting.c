/*Design and develop a Voting Eligibility System in C that determines whether a person is eligible 
to vote based on multiple conditions.The program should ask the user to enter the following details:
Age
Citizenship status
Voter ID availability
The system should verify all the conditions and display whether the person is eligible to vote or not. 
If the person is not eligible, the program should clearly mention the reason.*/

#include<stdio.h>
int main() {
    int age,citizenship,voterId;
    //read user data
    printf("Enter the age : ");
    scanf("%d",&age);

    printf("Enter the Citizenship status (Yes = 1 and No = 0) : ");
    scanf("%d",&citizenship);

    printf("Enter the availability of the Voter ID (Yes = 1 and No = 0)");
    scanf("%d",&voterId);
//Displaying output
    printf("============================================\n");
    printf("           Voting Eligibility               \n");
    printf("============================================\n");
    printf("Age           :  %d\n",age);

    if ((citizenship != 0 && citizenship != 1) || (voterId != 0 && voterId != 1 )) {
        printf("Invalid Input\n");
    }
    else if(age >= 18 && citizenship == 1 && voterId == 1) {
        printf("Citizen       :  YES\n");
        printf("Voter ID      :  YES\n");
        printf("\nVoting Status :  Eligible\n");

    }
    else if (age >= 18 && citizenship == 0 && voterId == 1) {
        printf("Citizen       :  NO\n");
        printf("Voter ID      :  YES\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Not a citizen \n");

    }
    else if (age >= 18 && citizenship == 1 && voterId == 0) {
        printf("Citizen       :  YES\n");
        printf("Voter ID      :  NO\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Valid Voter ID is required.\n");

    }
    else if (age < 18 && citizenship == 1 && voterId == 1){
        printf("Citizen       :  Yes\n");
        printf("Voter ID      :  Yes\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Person must be at least 18 years old.\n");

    }
    else if (age < 18 && citizenship == 0 && voterId == 0){
        printf("Citizen       :  NO\n");
        printf("Voter ID      :  NO\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Person must be at least 18 years old.\n");
        printf("Reason        :  Not a citizen.\n");
        printf("Reason        :  Valid Voter ID is required..\n");
    }
    else if (age < 18 && citizenship == 0 && voterId == 1){
        printf("Citizen       :  NO\n");
        printf("Voter ID      :  YES\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Person must be at least 18 years old.\n");
        printf("Reason        :  Not a citizen.\n");
    }
    else {
        //if (age < 18 && citizenship == 1 && voterId == 0)
        printf("Citizen       :  YES\n");
        printf("Voter ID      :  NO\n");
        printf("\nVoting Status :  Not Eligible\n");
        printf("Reason        :  Person must be at least 18 years old.\n");
        printf("Reason        :  Valid Voter ID is required..\n");
    }
    printf("============================================\n");
    return 0;

}