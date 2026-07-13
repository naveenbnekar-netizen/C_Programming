#include<stdio.h>
#include<math.h>

//declaring all function
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int modu(int a, int b);
int power(int a, int b);
int squ(int a);
int cube(int a);
int per(int a);

int main(){
    int a , b;

    printf("Enter the value of a and b: ");
    scanf("%d %d",&a, &b);

    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    modu(a, b);
    power(a, b);
    squ(a);
    cube(a);
    per(a);

return 0;
}

int add(int a, int b){

    printf("The sum of two num is: %d\n", a + b);
    
}
int sub(int a, int b){

    printf("The subtractuion of two num is: %d\n", a - b);

}
int mul(int a, int b){

    printf("The multiplication of two number is: %d\n", a * b);

}
int div(int a, int b){

    printf("The division of two numb is : %d\n", a / b);

}
int modu(int a, int b){

    printf("The modular of two num is: %d\n",a % b);

}
int power(int a, int b){

    double ans = pow(a,b);
    printf("The power of the number is: %0.f\n", ans);

}
int squ(int a){

    printf("The square of the number is: %0.f\n", pow(a,2));

}
int cube(int a){

    printf("The cube of the number is: %0.f\n", pow(a,3));

}
int per(int a){

    printf("The %d percentage of the 200 is : %d\n",a, (a * 200) / 100);

}