#include<stdio.h>
int main(){
    float inr,dllr;
    printf("Enter INR : ");
    scanf("%f",&inr);
    dllr = inr / 76.23;
    printf("%.4f INR = %.4f USD",inr,dllr);
    return 0;
}