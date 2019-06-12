/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll gcd(ll a, ll b)
{
    if (a == 0LL)
        return b;
    return gcd(b % a, a);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    ll x[n], p[m];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < m; i++)
        cin >> p[i];
    ll y = x[0];
    ll g = x[1] - x[0];
    for (int i = 1; i < n - 1; i++)
        g = gcd(g, x[i + 1] - x[i]);
    for (int i = 0; i < m; i++)
    {
        if (g % p[i] == 0)
        {
            cout << "YES" << endl
                 << y << ' ' << i + 1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}