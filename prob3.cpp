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
	//auto ignore = freopen("in","r",stdin);
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    long long n;
    cin>>t;
    long long number = 0;
    while(t--){
        cin>>n;
        number = n;
        for(long long i=2;i*i<=n;i++){
            if(n%i == 0){
                number = i;
                while(n%i == 0) n/=i;   
            }
        }
        cout<<max(number,n)<<"\n";
    }
	return 0;
}