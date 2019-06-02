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

    ll a, b, c;
    cin>>a>>b>>c;
    ll ans = min(a, b);
    a-=ans;
    b-=ans;
    ans*=2;
    ans+=2*c;
    if(a || b) ans++;
    cout<<ans<<endl;
    return 0;
}