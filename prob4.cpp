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
    auto isPalindrom = [](string n){
        for(int i=0;i<n.size()/2;i++) if(n[i] != n[n.size()-1-i]) return false;
        return true;
    };
    vector<long> all;
    for(long i=100;i<1000;i++) for(long j=i;j<1000;j++) if(isPalindrom(to_string(i*j))) all.push_back(i*j);   
	sort(all.begin(),all.end());
    cin.tie(0);
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n; 
        auto it = lower_bound(all.begin(),all.end(),n);
        int i = it-all.begin();
        if(it == all.end() || all[i]>=n) i--;
        cout<<all[i]<<endl;
    }
	return 0;
}