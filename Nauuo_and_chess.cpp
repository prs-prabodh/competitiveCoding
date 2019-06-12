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
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << ' ' << 1 << endl;
        return 0;
    }
    int ans = 0;
    if (n % 2)
    {
        ans = ((n - 1) / 2) + 1;
        cout << ans << endl;
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            cout << 1 << ' ' << i + 1 << endl;
        }
        for (int i = (n / 2) + 1, j = 1; i < n; i++, j++)
        {
            cout << j + 1 << ' ' << ans << endl;
        }
    }
    else
    {
        ans = (n / 2) + 1;
        cout << ans << endl;
        for (int i = 0; i < (n / 2); i++)
        {
            cout << 1 << ' ' << i + 1 << endl;
        }
        for (int i = (n / 2), j = 1; i < n; i++, j++)
        {
            cout << j + 1 << ' ' << ans << endl;
        }
    }
    return 0;
}