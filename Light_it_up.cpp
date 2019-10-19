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

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> intvl;
    for (int i = 0; i <= n; i++)
    {
        if (i == n)
        {
            intvl.push_back(m - a[i - 1]);
        }
        else if (i == 0)
        {
            intvl.push_back(a[i]);
        }
        else
        {
            intvl.push_back(a[i] - a[i - 1]);
        }
    }
    ll on[n + 1], off[n + 1], prev = 0LL;
    for (int i = 0; i < n + 1; i++)
    {
        int multiplier = (i % 2) ^ 1;
        prev = on[i] = prev + multiplier * intvl[i];
    }
    prev = 0LL;
    for (int i = (n + 1) % 2 ? n - 1 : n, j = 0; i >= 0; i--, j++)
    {
        int multiplier = (j % 2) ^ 1;
        prev = off[i] = prev + multiplier * intvl[i];
    }
    if ((n + 1) % 2)
        off[n] = 0LL;
    n++;
    ll ans = (ll)on[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (intvl[i] > 1)
        {
            ll left = i > 0 ? (ll)on[i - 1] : 0LL;
            ll right = i < n - 1 ? (ll)off[i + 1] : 0LL;
            ans = max(ans, intvl[i] - 1 + left + right);
        }
    }
    cout << ans << endl;
    return 0;
}