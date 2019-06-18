/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int digs;

int findMax(int n, int ref[])
{
    int ans = 0, i = digs - 1;
    while (n > 0)
    {
        ans = max(ans, n % 10);
        ref[i] = n % 10;
        // cout << ref[i] << ' ';
        n /= 10;
        i--;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    digs = log10(n) + 1;
    int ref[digs];
    int maxDig = findMax(n, ref);
    bool ans[maxDig][digs];
    for (int j = 0; j < digs; j++)
    {
        int copy = ref[j];
        for (int i = 0; i < maxDig; i++)
        {
            if (copy)
            {
                ans[i][j] = 1;
                copy--;
            }
            else
                ans[i][j] = 0;
        }
    }
    cout << maxDig << endl;
    for (int i = 0; i < maxDig; i++)
    {
        bool flag = false;
        for (int j = 0; j < digs; j++)
        {
            if (!flag)
            {
                if (ans[i][j])
                {
                    cout << ans[i][j];
                    flag = true;
                }
            }
            else
            {
                cout << ans[i][j];
            }
        }
        cout << ' ';
    }
    return 0;
}