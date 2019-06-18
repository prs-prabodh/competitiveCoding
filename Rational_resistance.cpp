/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll ans = 0LL;

void calc(ll a, ll b)
{
    ans += a / b;
    if (b == 1)
        return;
    calc(b, a % b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a, b;
    cin >> a >> b;
    calc(a, b);
    cout << ans << endl;
    return 0;
}