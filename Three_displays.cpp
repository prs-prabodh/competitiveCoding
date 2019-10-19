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
    int s[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int minCost = INT_MAX;
    for (int i = 1; i < n - 1; i++)
    {
        int left = -1, right = -1;
        for (int j = 0; j < i; j++)
        {
            if (s[j] < s[i] && (c[left] >= c[j] || left < 0))
            {
                left = j;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] > s[i] && (c[right] >= c[j] || right < 0))
            {
                right = j;
            }
        }
        if (left >= 0 && right >= 0)
            minCost = min(minCost, c[i] + c[left] + c[right]);
    }
    minCost == INT_MAX ? cout << -1 : cout << minCost;
    return 0;
}