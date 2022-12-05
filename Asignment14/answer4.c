#include<stdio.h>
void num(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The first %d natural numbers are\n",n);
    num(n);
}
void num(int a){
    for (int i = 1; i <= a; i++)
        printf("%d",i);
}