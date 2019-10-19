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

    int n, l, r;
    cin >> n >> l >> r;
    ll dp[n + 1][3];
    for (int i = 0; i < 3; i++)
    {
        dp[1][(l + i) % 3] = i <= r - l ? (r - l - i) / 3 + 1 : 0;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int rem = 0; rem < 3; rem++)
        {
            dp[i][rem] = 0LL;
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if ((x + y) % 3 == rem)
                    {
                        dp[i][rem] = (dp[i][rem] + (dp[i - 1][x] % M * dp[1][y] % M) % M) % M;
                    }
                }
            }
        }
    }
    cout << dp[n][0] % M << endl;
    return 0;
}