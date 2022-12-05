#include<stdio.h>
void odd(int);
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int a){
    printf("first %d odd natural numbers :\n",a);
    for (int i = 1; i <= a; i++)
        printf("%d\t",(i*2)-1);
}