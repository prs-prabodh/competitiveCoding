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
    int a[n], mxn = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mxn = max(mxn, a[i]);
    }
    int div[mxn + 1];
    memset(div, 0, sizeof(int) * (mxn + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sqrt(mxn); j++)
        {
            if (a[i] % j == 0)
            {
                div[j]++;
                if (a[i] / j > sqrt(mxn))
                {
                    div[a[i] / j]++;
                }
            }
        }
    }
    int ans = 1;
    for (int i = 1; i <= mxn; i++)
    {
        if (i > 1)
        {
            ans = max(ans, div[i]);
        }
    }
    cout << ans << endl;
    return 0;
}