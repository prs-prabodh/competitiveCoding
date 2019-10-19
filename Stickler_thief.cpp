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
        int dp[n], ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i < 2)
            {
                dp[i] = x;
            }
            else
            {
                int newE = max(dp[i - 3] + x, dp[i - 2] + x);
                dp[i] = newE;
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}