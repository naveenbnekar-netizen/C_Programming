#include<stdio.h>
int main() {
    int age,vision,document;

    printf("Enter the age :  ");
    scanf("%d",&age);

    printf("Enter the vision test result (passed = 1, failed = 0) : ");
    scanf("%d",&vision);

    printf("Enter the document verification (passed = 1, failed = 0) : ");
    scanf("%d",&document);
    printf("==================================================\n");
    printf("Driving License eligibility checker\n");
    printf("==================================================\n");

    if(age >= 18) {
        printf("Age         : %d\n",age);

        if ((vision != 1 && vision != 0) || (document != 1 && document != 0)) {

            printf("Invalid input\n");

        }
        
        else if (vision == 1 && document == 1) {
                    
            printf("Vision test : Passed\n");
            printf("Documents   : verified\n");
            printf("STATUS      : Eligible\n");

        }
        else if (vision == 0 && document == 1){

            printf("STATUS      : NOT Eligible\n");
            printf("REASON      : Vision test failed\n");

        }
        else if (vision == 1 && document == 0) {

            printf("STATUS      : NOT Eligible\n");
            printf("REASON      : Documents verification failed\n");
        }
        else {//if (vision == 0 && document == 0) 

            printf("STATUS      : NOT Eligible\n");
            printf("REASON      : Vision test and Documents verification failed\n");
        }
    }
    else {
        printf("STATUS    : NOT ELIGIBLE\n");
        printf("REASON    : Applicant must be at least 18 years old\n");

    }
     printf("==================================================");

    return 0;


}