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
    for(int i=2;i<isPrime.size();i++){
        if(!isPrime[i]) continue;
        primes.push_back(i);
        for(int j=2*i;j<isPrime.size();j = j + i) isPrime[j] = false;
    }
    int t;
    long long n;
    
    cin>>t;
    while(t--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
	return 0;
}