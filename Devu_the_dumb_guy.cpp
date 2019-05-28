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

    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll ans = 0LL;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * x;
        x = max(1LL, x - 1);
    }
    cout << ans << endl;
    return 0;
}