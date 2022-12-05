#include<stdio.h>
int main(){
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);
    year%4==0?printf("Leap year"):printf("Not a leap year");
    return 0;
}