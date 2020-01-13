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

double verify(vector<double> &vec,int numbersLength){
    double ans = 0,prod = 1;
    int numberCount = 0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]== 0){
            prod = 1;
            numberCount = 0;
            continue;
        } 
        numberCount++;
        prod *= vec[i];
        if(numberCount>numbersLength) prod /=vec[i-4],numberCount--;
        ans = max(ans,prod);
    }
    return ans;
}

double verify_lines(vector<vector<double>> &vec,int numbersLength){
    double ans = 0;
    for(auto &line:vec) ans = max(ans,verify(line,numbersLength));
    return ans;
}

double verify_diagonals(vector<vector<double>> &vec,int numbersLength){
    vector<double> v1,v2;
    double ans = 0;
    for(int i=0;i<vec.size();i++){
        v1.clear();
        v2.clear();
        for(int k=0;i+k<vec.size();k++)v1.push_back(vec[i+k][k]),v2.push_back(vec[k][k+i]);
        ans = max(ans,verify(v1,numbersLength));
        ans = max(ans,verify(v2,numbersLength));
    }
    return ans;
    
}

vector<vector<double>> transpose(vector<vector<double>> &vec){
    vector<vector<double>> tr(vec.size(),vector<double>(vec.size()));
    for(int i=0; i<vec.size(); ++i)
        for(int j=0; j<vec.size(); ++j)
            tr[i][j] = vec[i][vec.size()-j-1];
    return tr;
}


int main() {
	auto ignore = freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 20;
    int c = 4;
    vector<vector<double>> vec(n,vector<double>(n));
    for(auto &row:vec) for(auto &x:row) cin>>x;
    double ans= 0; 
    ans = max(ans,verify_lines(vec,c));
    ans = max(ans,verify_diagonals(vec,c));    
    vec = transpose(vec);
    ans = max(ans,verify_lines(vec,c));
    ans = max(ans,verify_diagonals(vec,c));    
    cout<<long(ans)<<endl;
	return 0;
}