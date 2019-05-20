/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
unordered_map<ll, vector<int>> m;

ll search(int i, ll x)
{
    auto it = upper_bound(m[x].begin(), m[x].end(), i);
    return (ll)(m[x].end() - it);
}

int main()
{
    int n;
    cin >> n;
    ll presum[n];
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            presum[i] = x;
            m[presum[i]].push_back(i);
            continue;
        }
        presum[i] = presum[i - 1] + x;
        // cout << presum[i] << endl;
        if (i != n - 1)
        {
            m[presum[i]].push_back(i);
        }
    }
    ll ans = 0LL;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << presum[i] << endl;
        if (presum[n - 1] % 3 == 0 && presum[i] == presum[n - 1] / 3)
        {
            // cout << i << ' ' << search(i, 2 * presum[i])<<endl;
            ans += search(i, 2 * presum[i]);
        }
    }
    cout << ans << endl;
    return 0;
}