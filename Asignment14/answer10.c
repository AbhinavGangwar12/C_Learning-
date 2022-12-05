#include<stdio.h>
int hcf(int,int);
int main(){
    int a,b;
    printf("Enter two numbers for their hcf :\n");
    scanf("%d%d",&a,&b);
    printf("HCF : %d", hcf(a,b));
    return 0;
}
int hcf(int x,int y){
    int h;
    int hcf;
    for (int i = 1; i < x||i < y; i++)
    {
        if(x%i==0 && y%i==0)
            h = i;
    }
    return h;
}