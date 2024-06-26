#include<iostream>
using namespace std;

int sqrt(int num){
  int low = 1,high = num;
  while(low<=high){
    int mid = (low+high)/2;
    if(mid*mid <= num{
      low = mid+1;
    }
    else{
      high = mid-1;
    }
    return high;
}

int main(){
  cout<<sqrt(25)<<endl;
  return 0;
}
