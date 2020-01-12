#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<set>
#include<list>
#include<bitset>
#include<queue>
#include<stack>
#include<cmath>
#include<string>
#define null NULL
using namespace std;



int main() {
	//auto ignore = freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    
   vector<long> primes;
    vector<bool> isPrime(1e6+1,true);
    vector<long long> sums;
    sums.push_back(0);
    primes.push_back(0);
    for(int i=2;i<isPrime.size();i++){
        if(!isPrime[i]) continue;
        primes.push_back(i);
        sums.push_back(i + sums.back());
        for(int j=2*i;j<isPrime.size();j = j + i) isPrime[j] = false;
    }
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       auto it = lower_bound(primes.begin(),primes.end(),n);
       auto ind = it - primes.begin();
       if(primes[ind]>n) ind--;
       cout<<sums[ind]<<endl;
    }
	return 0;
}