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
    int n, k, extraWalks = 0;
    cin >> n >> k;
    int a[n], ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            ans[i] = a[i];
            continue;
        }
        ans[i] = max(a[i], k - ans[i - 1]);
        extraWalks += max(0, ans[i] - a[i]);
    }
    cout << extraWalks << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    return 0;
}