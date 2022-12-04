#include<stdio.h>
int main(){
    int n,rev,num1,num2,num3;
    printf("Enter a 3 digit number : ");
    scanf("%d",&n);
    num1 = n/100;
    num2 = (n%100) /10;
    num3 = n%10;
    rev = num3*100 + num2*10 + num1;
    printf("The reverse number is : %d", rev);
    return 0;

}