#include<stdio.h>
int main(){
    int s1,s2,s3;
    if (s1 < s2+s3 || s2 < s1+s3 || s3 < s1+s2)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}