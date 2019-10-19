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

    int test = 0;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], maxN = INT_MIN, minN = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxN = max(maxN, a[i]);
            minN = min(minN, a[i]);
        }
        sort(a, a + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            int t1 = min(a[i] - k, minN);
            int t2 = max(a[i] + k, maxN);
            if (abs())
        }
    }
    return 0;
}