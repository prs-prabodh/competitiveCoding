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
    int a[n][n];
    ll d1[2 * n], d2[2 * n];
    memset(a, 0, sizeof(int) * n * n);
    memset(d1, 0LL, sizeof(ll) * n * 2);
    memset(d2, 0LL, sizeof(ll) * n * 2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            d1[i + j] += a[i][j];
            d2[i - j + n - 1] += a[i][j];
        }
    }
    pair<int, int> p1 = {1, 1}, p2 = {1, 2};
    ll v1 = 0LL, v2 = 0LL;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ll newV = d1[i + j] + d2[i - j + n - 1] - a[i][j];
            if ((i + j) % 2 == 1 && v1 < newV)
            {
                v1 = newV;
                p1.first = i + 1;
                p1.second = j + 1;
            }
            else if ((i + j) % 2 == 0 && v2 < newV)
            {
                v2 = newV;
                p2.first = i + 1;
                p2.second = j + 1;
            }
        }
    }
    cout << v1 + v2 << endl
         << p1.first << ' ' << p1.second << ' ' << p2.first << ' ' << p2.second << endl;
    return 0;
}