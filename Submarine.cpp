/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 998244353;
map<int, int> mp;

ll change(ll x)
{
    vector<int> digs;
    ll ans = 0, finalAns = 0LL;
    while (x > 0)
    {
        digs.push_back(x % 10);
        x /= 10;
    }
    // cout << digs.size() << endl;
    for (auto i : mp)
    {
        int times = i.first - 1;
        for (int i = digs.size() - 1; i >= 0; i--)
        {
            times > 0 ? ans = (ans * 100 + digs[i]) % M : ans = (ans * 10 + digs[i]) % M;
            times--;
        }
        ans = (ans * 10) % M;
        finalAns = (finalAns + (ans * i.second) % M) % M;
    }
    return finalAns;
}

ll change2(ll x)
{
    vector<int> digs;
    ll ans = 0;
    while (x > 0)
    {
        digs.push_back(x % 10);
        x /= 10;
    }
    // cout << digs.size() << endl;
    for (int i = digs.size() - 1; i >= 0; i--)
    {
        ans = (ans * 100 + digs[i]) % M;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, cnt = 0;
    cin >> n;
    ll a[n], b[n], totalSum = 0LL;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int copy = a[i];
        while (copy > 0)
        {
            copy /= 10;
            cnt++;
        }
        mp[cnt]++;
        b[i] = change2(a[i]);
        // a[i] = change(a[i]);
        // totalSum = (totalSum + a[i] % M) % M;
        // cout << a[i] << ' ' << b[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        totalSum = (totalSum + change(a[i])) % M;
    }
    ll ans = 0LL;
    for (int i = 0; i < n; i++)
    {
        ans = (ans + (totalSum + (b[i] * n) % M) % M) % M;
    }
    cout << ans << endl;
    return 0;
}