#include<stdio.h>
int check(int);
int main(){
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("%d",check(x));
    return 0;
}
int check(int a){
    if(a == 0)
        return -1;
    else if (a%2==0)
        return 1;
    else
        return 0;
}