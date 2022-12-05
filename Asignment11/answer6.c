#include<stdio.h>
int main(){
    int n,sum=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
        sum *= i;
    printf("%d",sum);
    return 0;
}