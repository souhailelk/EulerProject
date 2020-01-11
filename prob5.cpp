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


long gcd(long a,long b){
    return b == 0?a : gcd(b,a%b);
}

int main() {
	//auto ignore = freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<long> dp(41,1);
    for(int i=2;i<41;i++){
        long e = gcd(dp[i-1],i);
        dp[i] = dp[i-1] * i/e;
    }

    int t;
    long long n;
    long long prod;

    cin>>t;
    while(t--){
        cin>>n;
        cout<<dp[n]<<endl;
    }
	return 0;
}