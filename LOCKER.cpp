/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll exp(ll a, ll b)
{
    if (b <= 0)
        return 1LL;
    if (b == 1)
        return a % M;
    if (b & 1)
        return (ll)(a % M * (ll)powl((exp(a, b / 2) % M), 2) % M) % M;
    else
        return (ll)powl((exp(a, b / 2) % M), 2LL) % M;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 0;
    cin >> test;
    while (test--)
    {
        ll x, ans;
        cin >> x;
        if (x < 3)
        {
            cout << x << endl;
            continue;
        }
        switch (x % 3)
        {
        case 0:
            ans = exp(3, x / 3);
            break;
        case 1:
            ans = (2LL * (2LL * exp(3, x / 3 - 1)) % M) % M;
            break;
        case 2:
            ans = (2LL * exp(3, x / 3)) % M;
        }
        cout << ans << endl;
    }
    return 0;
}