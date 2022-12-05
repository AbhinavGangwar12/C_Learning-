#include<stdio.h>
int main(){
    char alpha;
    printf("Enter any character : ");
    scanf("%c", &alpha);
    alpha>='a' && alpha<='z'?printf("Lowercase"):alpha>='A' && alpha<='Z'?printf("Uppercase"):printf("Special character");
    return 0;
}