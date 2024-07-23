// THIS ALGORITHM IS VERY USEFULL IN FINDING PRIMES IN FASTEST TIME
#include<iostream>
#include<vector>
using namespace std;

template<class t>
// t should be int,long,long long
vector<bool> seize(t n){
    vector<bool> primes(n+1,true);
    primes[0] = primes[1] = false;
    for(t i = 2;i*i <= n; i++){
        if(primes[i]){
            for(t j = i*i;j<=n;j+=i){
                primes[j] = false;
            }
        }
    }
    return primes;
}
template<class t>

bool is_prime(t n,const vector<bool> &primes){
    return n>=0 && n <= primes.size() && primes[n];
}

int main(){
    vector<bool> primes = seize(100);
    for(long long i = 2;i<100;i++){
        if(is_prime(i,primes))cout<<i<<" ";
    }
    return 0;
}