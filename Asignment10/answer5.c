#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\t",i*2);
    }
    return 0;
}