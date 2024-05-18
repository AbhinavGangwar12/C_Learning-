#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout<<"Enter numbers : ";
    int num1,num2;
    cin>>num1>>num2;
    int greater = max(num1,num2);
    int smaller = min(num1,num2);
    while(smaller!=0){
        int remainder = greater % smaller;
        greater = smaller;
        smaller = remainder;
    }
    cout<<"GCD : "<<greater<<endl;
    return 0;
}
