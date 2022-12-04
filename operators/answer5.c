#include<stdio.h>
int main(){
    int x=5,y=9,z;
    z = x;
    x = y;
    y = z;
    printf("%d\t%d",x,y);
    return 0;
}