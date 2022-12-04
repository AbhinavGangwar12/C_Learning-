#include<stdio.h>
int main(){
    int a = 9,b = 8;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d\t%d",a,b);
    return 0;
}