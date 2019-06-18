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
    int n, m;
    cin >> n >> m;
    unordered_map<int, bool> connected;
    vector<int> val(n + 1);
    set<pair<int, int>, greater<pair<int, int>>> parts;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        parts.insert({x, i + 1});
        val[i + 1] = x;
        connected[i + 1] = true;
    }
    vector<vector<int>> e(n + 1, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    int ans = 0;
    for (auto i : parts)
    {
        for (auto j : e[i.second])
        {
            ans += connected[j] ? val[j] : 0;
        }
        connected[i.second] = false;
    }
    cout << ans << endl;
    return 0;
}