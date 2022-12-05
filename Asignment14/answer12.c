#include<stdio.h>
void prime(int);
int main(){
    int n;
    printf("Enter a number for prime numbers\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a){
    for (int i = 1; i <= a; i++)
    {
        int count = 0;
        for (int x = 1; x <= a; x++)
        {
            if(i%x==0)
                count++;
        }
        if(count == 2)
            printf("%d\t",i);
    }   
}