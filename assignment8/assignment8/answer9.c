#include<stdio.h>
int main(){
    double a,b,c;
    printf("Enter the value of coefficents a,b,c in Quadratic equation ->> to find nature of roots\n");
    scanf("%lf\t%lf\t%lf",&a,&b,&c);
    if ((b*b - (4*a*c)) > 0)
        printf("Roots are real and different");
    else if ((b*b - (4*a*c))<0)
        printf("Roots are complex and different");
    else
        printf("Roots are real and equal");
    return 0;
}