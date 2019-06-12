/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

vector<vector<int>> e;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int a[n];
    e.resize(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        e[x].push_back(i);
    }
    cout<<dfs(1)<<endl;
    return 0;
}