/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int mod(int x)
{
    if (x < 0)
        return x + 360;
    return x % 360;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < pow(2, n); i++)
    {
        int j = 0;
        int deg = 0;
        while (j < n)
        {
            if (i & (1 << j))
            {
                deg = mod(deg + a[j]);
            }
            else
            {
                deg = mod(deg - a[j]);
            }
            j++;
        }
        if (deg == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}