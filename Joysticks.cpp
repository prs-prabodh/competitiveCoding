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

    int a, b;
    cin >> a >> b;
    int ans = 0;
    while ((a > 1 || b > 1) && a > 0 && b > 0)
    {
        if (b >= a)
        {
            int t = b > 2 ? (b - 1) / 2 : b / 2;
            b -= (t * 2);
            a += t;
            ans += t;
        }
        else
        {
            int t = a > 2 ? (a - 1) / 2 : a / 2;
            a -= t * 2;
            b += t;
            ans += t;
        }
    }
    cout << ans << endl;
    return 0;
}