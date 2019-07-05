/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll C(ll n, ll r)
{
    ll ans = 1LL;
    for (int i = 0; i < min(r, n - r); i++)
    {
        ans *= n;
        n--;
    }
    r = min(r, n - r);
    while (r > 1)
    {
        ans /= r;
        r--;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    ll k;
    cin >> n >> k;
    string x;
    cin >> x;
    ll ans = 0LL, del = 1LL;
    k = k - 1;
    while (k > 0 && del <= n)
    {
        ll nt = 0;
        ll dp[n + 1], last[26];
        memset(dp, 0LL, sizeof(ll) * (n + 1));
        memset(last, 0LL, sizeof(ll) * (26));
        for (int i = 1; i <= n; i++)
        {
            dp[i] = 2 * dp[n - 1];
            if (last[x[i - 1] - 'a'] > 0)
            {
                dp[i] -= dp[last[x[i - 1] - 'a']];
            }
            last[x[i - 1] - 'a'] = i;
        }
        ll ele = min(k, dp[n]);
        ans += del * ele;
        k -= ele;
        del++;
    }
    cout << ans << endl;
    return 0;
}