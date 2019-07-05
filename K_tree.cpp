/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll n, K, d, *dp;
bool *rec;

ll recur(ll x, ll k)
{
    if (rec[x])
    {
        return dp[x];
    }
    if (x == 0LL)
    {
        rec[x] = true;
        return dp[x] = 1LL;
    }
    dp[x] = 0LL;
    for (ll i = 1LL; i <= min(x, k); i++)
    {
        dp[x] = (dp[x] % M + recur(x - i, k) % M) % M;
    }
    rec[x] = true;
    return dp[x];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> K >> d;
    dp = new ll[n + 1];
    rec = new bool[n + 1];
    memset(rec, false, sizeof(bool) * (n + 1));
    ll ans = recur(n, K) % M;
    memset(rec, false, sizeof(bool) * (n + 1));
    ans = (ans - recur(n, d - 1) % M) % M;
    ans >= 0 ? cout << ans << endl : cout << ans + M << endl;
    return 0;
}