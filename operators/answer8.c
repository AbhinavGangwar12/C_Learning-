#include<stdio.h>
int main(){
    int n,a;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter the digit u want to append : ");
    scanf("%d",&a);
    printf("%d", (n*10)+a);
    return 0;
}