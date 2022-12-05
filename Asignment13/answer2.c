#include<stdio.h>
int main(){
    int n;
    float a,b;
    printf("Enter two numbers :\n");
    scanf("%f%f",&a,&b);
    printf("Press:\n1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n5 to exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("%.2f",a+b);
        break;
    case 2:
        printf("%.2f",a-b);
        break;
    case 3:
        printf("%.2f",a*b);
        break;
    case 4:
        printf("%.2f",a/b);
        break;
    case 5:
        break;
    default:
        break;
    }
    return 0;
}