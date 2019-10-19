/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int minimumSwaps(vector<int> a)
{
    int n = a.size(), ans = 0;
    vector<pair<int, int>> aPairs(n);
    for (int i = 0; i < n; i++)
    {
        aPairs[i] = {a[i], i};
    }
    sort(aPairs.begin(), aPairs.end());
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || aPairs[i].second == i)
            continue;
        else
        {
            int j = i;
            int cycleSize = 0;
            while (!vis[j])
            {
                vis[j] = true;
                j = aPairs[j].second;
                cycleSize++;
            }
            ans += cycleSize - 1;
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 3, 5, 2, 4, 6, 7};
    cout << minimumSwaps(a) << endl;
    return 0;
}