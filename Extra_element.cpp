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

    ll n, ans = -1LL, found = 0LL;
    cin >> n;
    ll b[n], a[n];
    ll sum = 0LL;
    unordered_map<int, int> um;
    set<int> diff;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        um[a[i]]++;
        sum += a[i];
        diff.insert(a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        ll f, d, t = 0LL, nt;
        if (i == 0)
        {
            f = a[1];
            d = a[2] - a[1];
            nt = n - 1;
        }
        else if (i == 1)
        {
            f = a[0];
            d = a[2] - a[0];
            nt = n - 1;
        }
        else
        {
            f = a[0];
            d = a[1] - a[0];
            nt = n - 1;
        }
        t = ((nt) * ((2LL * f) + ((nt - 1LL) * d))) / 2LL;
        if (sum - a[i] == t)
        {
            ans = a[i];
            found = 1;
            break;
        }
    }
    if (found == 0 || (n - diff.size() > 1 && diff.size() > 2))
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == ans)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}