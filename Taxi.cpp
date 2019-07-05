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
    int a[5];
    memset(a, 0, sizeof(int) * 5);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    ans = a[4] + a[2] / 2 + min(a[1], a[3]);
    int a13 = min(a[1], a[3]);
    a[1] -= a13;
    a[3] -= a13;
    if (a[2] % 2)
    {
        if (a[1])
        {
            a[1] -= min(2, a[1]);
        }
        ans++;
    }
    if (a[3] > a[1])
    {
        ans += a[3] - a[1];
    }
    else
    {
        ans += ceil((ld)(a[1] - a[3]) / 4);
    }
    cout << ans << endl;
    return 0;
}