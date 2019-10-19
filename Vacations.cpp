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
    int dp[n][3];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            if (x == 0)
            {
                dp[i][0] = 1;
                dp[i][1] = INT_MAX;
                dp[i][2] = INT_MAX;
            }
            else if (x == 1)
            {
                dp[i][0] = 1;
                dp[i][1] = 0;
                dp[i][2] = INT_MAX;
            }
            else if (x == 2)
            {
                dp[i][0] = 1;
                dp[i][1] = INT_MAX;
                dp[i][2] = 0;
            }
            else
            {
                dp[i][0] = 1;
                dp[i][1] = 0;
                dp[i][2] = 0;
            }
            continue;
        }
        if (x == 0)
        {
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = INT_MAX;
            dp[i][2] = INT_MAX;
        }
        else if (x == 1)
        {
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = INT_MAX;
        }
        else if (x == 2)
        {
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = INT_MAX;
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
        else
        {
            dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }
    cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2])) << endl;
    return 0;
}