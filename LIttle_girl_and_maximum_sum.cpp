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

    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int diff[n];
    ll in[n];
    memset(diff, 0, sizeof(int) * n);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        diff[l - 1] += 1;
        if (r < n)
            diff[r] -= 1;
    }
    in[0] = (ll)diff[0];
    for (int i = 1; i < n; i++)
    {
        in[i] = in[i - 1] + diff[i];
    }
    sort(in, in + n, greater<int>());
    sort(a, a + n, greater<int>());
    ll ans = 0LL;
    for (int i = 0; i < n; i++)
    {
        ans += in[i] * a[i];
    }
    cout << ans << endl;
    return 0;
}