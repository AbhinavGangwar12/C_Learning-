#include<stdio.h>
int main(){
    int num,i,container,j = 10;
    printf("Enter any number : ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++){
        num = num/10;
        if (num<1)
            break;
    }
    printf("there are %d digits in your number",i+1);
    return 0;
}