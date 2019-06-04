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
    int ans[n + 1];
    memset(ans, 0, sizeof(int) * (n + 1));
    int filler = 1;
    for (int i = 2; i <= n; i++)
    {
        int j = 1;
        bool flag = false;
        while (i * j <= n)
        {
            if (ans[i * j] == 0)
            {
                flag = true;
                ans[i * j] = filler;
            }
            j++;
        }
        if (flag)
            filler++;
    }
    for (int i = 2; i <= n; i++)
        cout << ans[i] << ' ';
    return 0;
}