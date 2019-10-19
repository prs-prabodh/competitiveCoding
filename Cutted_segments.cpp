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
        int n;
        cin >> n;
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        int dp[n + 1];
        for (int i = 1; i <= n; i++)
        {
            dp[i] = INT_MIN;
        }
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i >= a[j])
                {
                    dp[i] = max(dp[i], dp[i - a[j]] + 1);
                }
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}