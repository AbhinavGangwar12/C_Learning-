#include<stdio.h>
int main(){
    int num,t1=0,t2=1,term;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num ==1)
    {
        printf("%d",t1);
    }else if (num == 2)
    {
        printf("%d\t%d",t1,t2);
    }
    else
        printf("%d\t%d\t",t1,t2);
    for (int i = 3; i <= num; i++)
    {
        term = t1+t2;
        printf("%d\t",term);
        t1 = t2;
        t2 = term;
    }
    return 0;    
}