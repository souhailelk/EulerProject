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
    vector<vector<tuple<int,int,int>>> res(3001,vector<tuple<int,int,int>>());
    for(long a=1;a<=3000;a++){
        for(long b=a;b<=3000;b++){
            long long c = a*a + b*b;
            long long x = sqrt(c);
            if(c == x*x && (a+b+x)<=3000 ) res[a+b+x].push_back({a,b,x}); 
        }
    }
    
    while(t--){
       int n;
       long long a,b,c;
       cin>>n;
       if(res[n].size()){
           long long mx = 0;
           for(auto x:res[n]) tie(a,b,c) = x,mx = max(mx,a*b*c);
           cout<<mx<<endl;
       }
       else cout<<-1<<endl;
    }
	return 0;
}