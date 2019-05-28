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

    string x;
    cin >> x;
    int len = x.length();
    int a[len];
    a[0] = 0;
    for (int i = 1; i < len; i++)
    {
        a[i] = x[i] == x[i - 1] ? a[i - 1] + 1 : a[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        int left = l - 2 >= 0 ? a[l - 2] : 0;
        int ans = a[r - 1] - left;
        if (l > 1 && x[l - 1] == x[l - 2])
            ans--;
        cout << ans << endl;
    }
    return 0;
}