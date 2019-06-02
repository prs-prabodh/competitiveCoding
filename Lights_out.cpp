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

    int a[3][3], ans[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            ans[i][j] = x % 2 ? ans[i][j] ^ 1 : ans[i][j];
            if (j - 1 >= 0)
                ans[i][j - 1] = x % 2 ? ans[i][j - 1] ^ 1 : ans[i][j - 1];
            if (j + 1 < 3)
                ans[i][j + 1] = x % 2 ? (ans[i][j + 1] ^ 1) : ans[i][j + 1];
            if (i - 1 >= 0)
                ans[i - 1][j] = x % 2 ? ans[i - 1][j] ^ 1 : ans[i - 1][j];
            if (i + 1 < 3)
                ans[i + 1][j] = x % 2 ? (ans[i + 1][j] ^ 1) : ans[i + 1][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}