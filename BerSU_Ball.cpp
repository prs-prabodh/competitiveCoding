/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    unordered_map<int, int> in, out;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
        in[x]++;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        out[x]++;
    }
    int cnt=0;
    for(auto i:s){
        int pairs = min(in[i], out[i - 1]);
        in[i] -= pairs;
        out[i - 1] -= pairs;
        cnt += pairs;
        pairs = min(in[i], out[i]);
        in[i]-=pairs;
        out[i]-=pairs;
        cnt+=pairs;
        pairs = min(in[i], out[i+1]);
        in[i]-=pairs;
        out[i+1]-=pairs;
        cnt+=pairs;
    }
    cout<<cnt<<endl;
    return 0;
}