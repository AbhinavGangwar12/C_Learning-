#include<stdio.h>
int fac(int);
int main(){
    int n;
    printf("Enter a number for its factorial : ");
    scanf("%d",&n);
    printf("%d", fac(n));
    return 0;
}
int fac(int a){
    int x=1;
    for (int i = a; i > 0; i--)
    {
        x *= i;
    }
    return x;
}