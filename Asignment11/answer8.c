#include<stdio.h>
int main(){
    int num,sum =1;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (int i = 2; i <= 5; i++)
    {
        if(num == 3 || num == 5 || num == 1){
            printf("Prime");
            break;
        }
        else if(num%i==0){
            sum++;
            break;
        }
        else
            sum = 0;
    }
    if (sum == 0)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}