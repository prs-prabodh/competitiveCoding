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

    int n;
    cin >> n;
    int a[n], mxHt[n + 1];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mxHt[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mxHt[i] = max(a[i], mxHt[i + 1]);
    }
    for (int i = 0; i < n; i++)
        cout << max(0, mxHt[i + 1] + 1 - a[i]) << ' ';
    return 0;
}