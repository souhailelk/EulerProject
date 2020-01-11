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
    vector<long long> t1(1e4+1,0),t2(1e4+1,0),ans(1e4+1,0);
    for(long long i=1;i<t1.size();i++){
        long long x = i*i;
        t1[i] = t1[i-1] + x;
        t2[i] = t2[i-1] + 2*sqrt(t2[i-1])*i + x;
        ans[i] = t2[i] - t1[i];
    }
    int t;
    long long n;
    
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
	return 0;
}