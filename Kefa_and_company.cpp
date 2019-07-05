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

    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    ll presum[n + 1];
    presum[0] = 0LL;
    for (int i = 0; i < n; i++)
    {
        presum[i] = presum[i - 1] + a[i].second;
    }
    ll ans = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = i, x = -1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (a[m].first > a[i].first - d)
            {
                x = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        ans = max(presum[i] - presum[x - 1], ans);
    }
    cout << ans << endl;
    return 0;
}