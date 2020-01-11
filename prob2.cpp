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
#define null NULL
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    int xx = 110;
    vector<unsigned long long> fib(xx);
    vector<unsigned long long> sum(xx,0);
    fib[1] = fib[2] = 1;
    for(int i=3;i<=xx;i++){
        fib[i] = fib[i-1] + fib[i-2];
        sum[i] = sum[i-1];
        if(fib[i] % 2 == 0) sum[i] += fib[i]; 
    }
    
    int t;
    unsigned long long n;
    cin>>t;
    while(t--){
        cin>>n;
        auto it = lower_bound(fib.begin(),fib.end(),n);
        int i = it- fib.begin();
        if(fib[i]>n) i--;
        cout<<sum[i]<<endl;
    }
	return 0;
}
 