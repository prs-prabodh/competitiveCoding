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
    int a[5] = {1, 5, 10, 20, 100};
    int n, cnt = 0;
    cin >> n;
    while (n > 0)
    {
        for (int i = 4; i >= 0; i--)
        {
            if (a[i] <= n)
            {
                cnt++;
                n -= a[i];
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}