/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll c(ll n, ll r)
{
    if (n < r)
        return 0LL;
    ll ans = 1LL;
    for (int i = 0; i < r; i++)
        ans *= (n - i);
    for (int i = 2; i <= r; i++)
        ans /= i;
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    ll a[26];
    memset(a, 0LL, sizeof(ll) * 26);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        a[x[0] - 'a']++;
    }
    ll ans = 0LL;
    for (int i = 0; i < 26; i++)
    {
        ans += c(a[i] / 2, 2LL) + c(a[i] - (a[i] / 2LL), 2LL);
    }
    cout << ans << endl;
    return 0;
}