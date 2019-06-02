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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        if (a[0] > q)
        {
            cout << 0 << endl;
            continue;
        }
        if (a[n - 1] < q)
        {
            cout << n << endl;
            continue;
        }
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (a[m] <= q)
            {
                ans = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}