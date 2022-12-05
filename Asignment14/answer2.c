#include<stdio.h>
float interest(float,float,float);
int main(){
    float p,r,t;
    printf("Enter Principle amount :\n");
    scanf("%f",&p);
    printf("Enter rates :\n");
    scanf("%f",&r);
    printf("Enter time in years :\n");
    scanf("%f",&t);
    printf("Simple Interest : %.3f",interest(p,r,t));
    return 0;
}
float interest(float p,float r,float t){
    float s = (p*r*t)/100;
    return s;
}