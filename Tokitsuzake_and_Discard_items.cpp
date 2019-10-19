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

    ll n, m, k;
    cin >> n >> m >> k;
    ll curr = k;
    ll p = 0;
    ll a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int ans = 0;
    while (p < m)
    {
        if (a[p] <= k)
        {
            int cnt = 0;
            while (a[p] <= k && p < m)
            {
                // cout << a[p] << ' ' << k << endl;
                cnt++;
                p++;
            }
            k += cnt;
            ans++;
        }
        else if (a[p] > k)
        {
            // cout << k << ' ' << curr << ' ' << ans << endl;
            k += (ll)(ceil((ld)(a[p] - k) / curr) * curr);
        }
    }
    cout << ans << endl;
    return 0;
}