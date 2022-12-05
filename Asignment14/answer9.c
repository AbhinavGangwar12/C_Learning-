#include<stdio.h>
int lcm(int,int);
int main(){
    int a,b;
    printf("Enter two numbers for their lcm\n");
    scanf("%d%d",&a,&b);
    printf("lcm is %d", lcm(a,b));
    return 0;
}
int lcm(int x,int y){
    int hcf;
    for (int i = 1; i < x||i < y; i++)
    {
        if(x%i==0 && y%i==0)
            hcf = i;
    }
    return (x*y)/hcf;
}