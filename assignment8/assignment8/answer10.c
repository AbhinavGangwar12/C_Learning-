#include<stdio.h>
int main(){
    float p,c,m,b,cm,percentage;
    printf("ENTER MARKS OF PHYSICS,CHEMISTRY,MATHS,BIOLOGY AND COMPUTERS IN THE GIVEN ORDER\n");
    scanf("%f%f%f%f%f",&p,&c,&m,&b,&cm);
    percentage = (p+c+m+b+cm)/5;
    if(percentage>=90)
        printf("Grade A");
    else if(percentage>=80)
        printf("Grade B");
    else if(percentage>=70)
        printf("Grade C");
    else if(percentage>=60)
        printf("Grade D");
    else if(percentage>=40)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}