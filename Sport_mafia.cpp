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

    ll n, k;
    cin >> n >> k;
    ll D = 9 + (ll)(8 * (k + n));
    ll ans = (ld)(-3 + (ll)sqrt(D));
    ans /= 2;
    ans = n - ans;
    cout << ans << endl;
    return 0;
}