#include<stdio.h>
int main(){
    int num1,num2,hcf,lcm;
    printf("Enter two numbers for their Lcm \n");
    scanf("%d%d", &num1, &num2);
    for (int i = 1; i<num1||i<num2; i++)
    {
        if(num1%i==0 && num2%i == 0)
            hcf = i;
    }
    lcm = (num1*num2)/hcf;
    printf("Lcm = %d", lcm);
    return 0;
}