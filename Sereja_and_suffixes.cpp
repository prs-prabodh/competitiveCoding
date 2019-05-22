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
    int n, m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans[n];
    set<int> s;
    for(int i=n-1;i>=0;i--){
        auto it = s.find(a[i]);
        if(it!=s.end()){
            ans[i]=ans[i+1];
        }
        else{
            if(i==n-1)
                ans[i]=1;
            else
                ans[i]=ans[i+1]+1;
            s.insert(a[i]);
        }
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<ans[x-1]<<endl;
    }
    return 0;
}