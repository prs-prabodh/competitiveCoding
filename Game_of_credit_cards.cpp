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
    string a, b;
    cin >> a >> b;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = a[i] - '0';
        y[i] = b[i] - '0';
    }
    sort(x, x + n);
    sort(y, y + n);
    int px = 0, py = 0, sher = 0, mori = 0;
    vector<int> store;
    for (py = 0; py < n; py++)
    {
        if (x[px] > y[py])
        {
            mori++;
        }
        else
        {
            px++;
        }
    }
    px = 0, py = 0;
    for (py = 0; py < n; py++)
    {
        if (x[px] < y[py])
        {
            sher++;
            px++;
        }
    }
    cout << mori << endl
         << sher << endl;
    return 0;
}