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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int dp[n][m];
        dp[n - 1][m - 1] = a[n - 1][m - 1] >= 0 ? 1 : abs(a[n - 1][m - 1]) + 1;
        for (int i = n - 2; i >= 0; i--)
        {
            dp[i][m - 1] = max(dp[i + 1][m - 1] - a[i][m - 1], 1);
        }
        for (int i = m - 2; i >= 0; i--)
        {
            dp[n - 1][i] = max(dp[n - 1][i + 1] - a[n - 1][i], 1);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = m - 2; j >= 0; j--)
            {
                dp[i][j] = max(min(dp[i + 1][j], dp[i][j + 1]) - a[i][j], 1);
            }
        }
        cout << dp[0][0] << endl;
    }
    return 0;
}