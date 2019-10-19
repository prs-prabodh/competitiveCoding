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

    int n, k;
    cin >> n >> k;
    int a[n], all_set[n], actual[n];
    bool awake[n];
    all_set[0] = actual[0] = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> awake[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            actual[i] = a[i] * awake[i];
            all_set[i] = a[i];
            continue;
        }
        actual[i] = actual[i - 1] + awake[i] * a[i];
        all_set[i] = all_set[i - 1] + a[i];
    }
    int maxLec = INT_MIN;
    for (int i = k - 1; i < n; i++)
    {
        int t = (i - k >= 0 ? actual[i - k] : 0) + (all_set[i] - (i - k >= 0 ? all_set[i - k] : 0)) + (actual[n - 1] - actual[i]);
        maxLec = max(maxLec, t);
    }
    cout << maxLec << endl;
    return 0;
}