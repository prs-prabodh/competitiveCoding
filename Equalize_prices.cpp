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

    int test = 0;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], mxn = LLONG_MIN, mnn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mxn = max(mxn, a[i]);
            mnn = min(mnn, a[i]);
        }
        (llabs(mnn + k - mxn) <= k && mnn + k > 0LL) ? cout << mnn + k << endl : cout << -1 << endl;
    }
    return 0;
}