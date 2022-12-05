#include<stdio.h>
int main(){
    int s1,s2,s3,n,a,b,c;
    printf("Enter three sides of a triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    printf("Enter\n1 to check it is isosceles or not\n2 check for Right angled triangle\n3 check for Equilateral Triangle\n4 to exit");
    scanf("%d",&n);
    a = s1*s1;b=s2*s2;c=s3*s3;
    switch (n)
    {
    case 1:
        if(s1==s2||s2==s3||s1==s3)
            printf("Yes it is Isoceles");
        else
            printf("Not Isoceles");
        break;
    case 2:
        if(a+b==c||a+c==b||b+c==a)
            printf("Right Angled");
        else
            printf("Not Right Angled");
        break;
    case 3:
        if(s1==s2==s3)
            printf("Equilateral");
        else
            printf("Not Equilateral");
        break;
    case 4:
        break;
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}