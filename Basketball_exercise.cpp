/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll **a, n;

void fillDp()
{
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            a[0][i] += a[1][i - 1];
            a[1][i] += a[0][i - 1];
        }
        else
        {
            a[0][i] += max(a[1][i - 1], a[1][i - 2]);
            a[1][i] += max(a[0][i - 1], a[0][i - 2]);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n;
    a = new ll *[2];
    for (int i = 0; i < 2; i++)
    {
        a[i] = new ll[n];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    fillDp();
    cout << max(a[0][n - 1], a[1][n - 1]) << endl;
    return 0;
}