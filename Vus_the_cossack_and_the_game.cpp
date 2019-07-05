/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, m;
    cin >> n >> m;
    ll t = min(n, m) - 2LL;
    if (max(n, m) > min(n, m))
        t++;
    if (t <= 0)
        cout << 0 << endl;
    else
    {
        if (t == 1)
            cout << 2 << endl;
        else if (t == 2)
            cout << 3 << endl;
        else
        {
            t -= 2LL;
            ll ans = 0LL;
            ll a = 2LL, b = 3LL;
            while (t--)
            {
                ans = b + a;
                a = b;
                b = ans;
            }
            cout << ans << endl;
        }
    }
    return 0;
}