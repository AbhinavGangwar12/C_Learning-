#include<stdio.h>
float areacircle(float);
int main(){
    float r;
    printf("Enter radius of the circle\n");
    scanf("%f",&r);
    printf("%.2f",areacircle(r));
    return 0;
}
float areacircle(float p){
    float area = 3.12*p*p;
    return area;
}