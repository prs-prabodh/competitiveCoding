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

    int n, t;
    cin >> n >> t;
    int a[n], minBus = 0;
    for (int i = 0; i < n; i++)
    {
        ld s, d;
        cin >> s >> d;
        a[i] = s + d * (ceil(max((ld)0.00, t - s) / d));
        if (a[minBus] > a[i])
        {
            minBus = i;
        }
    }
    cout << minBus + 1 << endl;
    return 0;
}