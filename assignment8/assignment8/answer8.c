#include<stdio.h>
int main(){
    int month;
    printf("Enter any month number : ");
    scanf("%d",&month);
    if (month == 0 || month>12){
        printf("Enter a valid month");
        return 0;
    }
    else if (month%2==0)
        printf("It has 30 days");
    else if(month==3)
        printf("It has 28 days in normal year and 29 days in leap year");
    else
        printf("It has 31 days");
    return 0; 
}