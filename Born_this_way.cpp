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

    int n, m, ta, tb, k;
    cin >> n >> m >> ta >> tb >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    if (n <= k || m <= k)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = INT_MIN;
        for (int i = 0; i <= k; i++)
        {
            int barr = a[i] + ta;
            auto bflight = lower_bound(b, b + m, barr);
            if (bflight - b == m || b + m - bflight <= k - i)
            {
                ans = -1;
                break;
            }
            else
            {
                bflight += k - i;
                ans = max(ans, (*bflight) + tb);
            }
        }
        cout << ans << endl;
    }
    return 0;
}