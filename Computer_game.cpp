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

    int test = 0;
    cin >> test;
    while (test--)
    {
        ld k, n, a, b;
        cin >> k >> n >> a >> b;
        ll l = 0LL, r = n, ans = -1LL;
        while (l <= r)
        {
            ll m = l + (r - l) / 2;
            if (k - (m * a) - ((n - m) * b) > 0)
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}