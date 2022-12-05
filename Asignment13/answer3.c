#include<stdio.h>
int main(){
    int num;
    printf("Enter day number of week for greeting\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Enjoy your sunday");
        break;
    case 2:
        printf("Make a new start with monday");
        break;
    case 3:
        printf("Hello! It's Tuesday");
        break;
    case 4:
        printf("Great half way for the next holiday");
        break;
    case 5:
        printf("Yayyy its Thursday");
        break;
    case 6:
        printf("Its Friday! One more day to go");
        break;
    case 7:
        printf("Hurray! Its Saturday another holiday");
        break;
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}