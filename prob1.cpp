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
    int t;
    long long n,ans,num3,num5,num3_5;
    cin>>t;
    while(t--){
        cin>>n;
        n--;
        num3 = n/3;
        num5 = n/5;
        num3_5 = n/15;
        ans = 3 * num3 * (num3 + 1)/2 + 5 * num5*(num5 + 1)/2 - 15* num3_5 * (num3_5 + 1)/2; 
        cout<<ans<<endl;

    }
	return 0;
}
 