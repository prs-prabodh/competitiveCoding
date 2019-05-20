/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;
unordered_map<ll, vector<int>> m;

ll searchLow(ll i, ll num){
    ll ans=0LL;
    auto it = lower_bound(m[num].begin(), m[num].end(), i);
    ans = it - m[num].begin();
    return (ll)ans;
}

ll searchHigh(ll i, ll num){
    ll ans=0LL;
    auto it = upper_bound(m[num].begin(), m[num].end(), i);
    ans = m[num].end() - it;
    return (ll)ans;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x].push_back(i);
        a.push_back(x);
    }
    ll ans=0LL;
    for(int i=0;i<n;i++){
        if(a[i]%k==0){
            ll x = searchLow(i, a[i]/k);
            ll y = searchHigh(i, a[i]*k);
            ans+=(x*y);
        }
    }
    cout<<ans<<endl;
    return 0;
}