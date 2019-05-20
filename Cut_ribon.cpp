/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
vector<ll> pieces;
int plen = 0;
ll *dp;
bool *calculated;

ll calc(ll level, ll n)
{
    if (n == 0)
    {
        return level;
    }
    if (n < 0)
    {
        return 0LL;
    }
    if (calculated[n])
    {
        return dp[n];
    }
    ll ans = LLONG_MIN;
    for (int i = 0; i < plen; i++)
    {
        ans = max(ans, calc(level + 1LL, n - pieces[i]));
    }
    calculated[n] = true;
    return dp[n] = ans;
}

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    dp = new ll[n + 1];
    calculated = new bool[n + 1];
    memset(calculated, false, (n + 1) * sizeof(bool));
    for (auto i : s)
    {
        pieces.push_back(i);
    }
    plen = s.size();
    ll ans = calc(0LL, n);
    cout << ans << endl;
    return 0;
}