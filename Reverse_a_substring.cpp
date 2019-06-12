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
    string x;
    cin>>x;
    for(int i=0;i<n-1;i++){
        if(x[i]>x[i+1]){
            cout<<"YES"<<endl<<i+1<<' '<<i+2<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}