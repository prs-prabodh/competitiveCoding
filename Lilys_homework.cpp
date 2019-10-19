/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int getSwaps(vector<pair<int, int>> ap)
{
    int n = ap.size(), ans = 0;
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || ap[i].second == i)
            continue;
        else
        {
            int j = i, cycleSize = 0;
            while (!vis[j])
            {
                vis[j] = true;
                j = ap[j].second;
                cycleSize++;
            }
            ans += cycleSize - 1;
        }
    }
    return ans;
}

int lilysHomework(vector<int> a)
{
    int n = a.size();
    vector<pair<int, int>> ap(n);
    for (int i = 0; i < n; i++)
    {
        ap[i] = {a[i], i};
    }
    sort(ap.begin(), ap.end());
    int ans = getSwaps(ap);
    sort(ap.rbegin(), ap.rend());
    ans = min(ans, getSwaps(ap));
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {3,4,2,5,1};
    cout << lilysHomework(a) << endl;
    return 0;
}