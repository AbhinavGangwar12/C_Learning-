#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num>0?printf("positive"):num<0?printf("negative"):printf("zero");
    return 0;
}