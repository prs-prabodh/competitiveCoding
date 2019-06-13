/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll *a;
int n;

bool valid(ll m)
{
    ll spvsr = 0LL;
    for (int i = 0; i < n; i++)
    {
        spvsr += m - a[i];
    }
    return (spvsr >= m) ? true : false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n;
    ll minGames = LLONG_MIN;
    a = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minGames = max(minGames, a[i]);
    }
    ll l = minGames, r = 2 * minGames, ans = 0LL;
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (valid(m))
        {
            r = m - 1;
            ans = m;
        }
        else
            l = m + 1;
    }
    cout << ans << endl;
    return 0;
}