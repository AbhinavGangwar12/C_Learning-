#include<stdio.h>
int main(){
    int year;
    printf("Enter any month number : ");
    scanf("%d",&year);
    if (year<1 || year>12)
        printf("Enter a valid month number");
    else if(year==2)
        printf("It has 28 days in normal year and 29 days in leap year");
    else if (year%2==0)
        printf("There are 30 days");
    else
        printf("There are 31 days");
    return 0;
}