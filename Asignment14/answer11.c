#include<stdio.h>
void prime(int);
int main(){
    int n;
    printf("Enter a number for next prime numbers\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a){
    for (int i = a+1; i <= a*2; i++)
    {
        int count = 0;
        for (int x = a+1; x <= a*2; x++)
        {
            if(i%x==0)
                count++;
        }
        if(count == 2)
            printf("%d\t",i);
            break;
    }   
}