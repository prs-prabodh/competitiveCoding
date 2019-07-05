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
    int left = INT_MIN, t[n], h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> h[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int right = i < n - 1 ? t[i + 1] : INT_MAX;
        if (t[i] > left + h[i])
        {
            ans++;
            left = t[i];
        }
        else if (right > t[i] + h[i])
        {
            ans++;
            left = t[i] + h[i];
        }
        else
            left = t[i];
    }
    cout << ans << endl;
    return 0;
}