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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        long long ans = 1;
        long long mx = 0;
        int p = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                if(p == k) mx = max(ans,mx);
                ans = 1;
                p = 0;  
            } else {
                ans *= long(s[i] - '0');
                p++;
                if(p>=k){
                    if(p>k) ans/=long(s[i - k] - '0'),p--;
                    mx = max(ans,mx);
                }
                
                
            }
        }
        cout<<mx<<endl;
    }
	return 0;
}