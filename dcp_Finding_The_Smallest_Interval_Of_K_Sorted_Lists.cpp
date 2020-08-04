/*
*	@author Prabodh Ranjan Swain
*	Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int M = 1e9 + 7;
using namespace std;

vector<int> getMinRange(vector<vector<int>> a)
{
    int minR = 0, maxR = INT_MAX;
    vector<pair<int, int>> acc;
    for (int i = 0; i < a.size(); i++)
    {
        for (auto j : a[i])
        {
            acc.push_back({j, i});
        }
    }
    sort(acc.begin(), acc.end());
    int l = 0, r = -1;
    unordered_map<int, int> um;
    int cnt = 0;
    while (true)
    {
        if (r >= (int)(acc.size() - 1))
        {
            break;
        }
        while (cnt < a.size() && r < (int)(acc.size() - 1))
        {
            pair<int, int> x = acc[++r];
            if (um.find(x.second) == um.end() || um[x.second] == 0)
            {
                cnt++;
                um[x.second] = 1;
            }
            else
            {
                um[x.second]++;
            }
        }
        while (cnt >= a.size())
        {
            if ((maxR - minR) > (acc[r].first - acc[l].first))
            {
                maxR = acc[r].first;
                minR = acc[l].first;
            }
            pair<int, int> x = acc[l++];
            if (um[x.second] == 1)
            {
                cnt--;
            }
            um[x.second]--;
        }
    }
    return {minR, maxR};
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<vector<int>> a = {{4, 10, 15, 24, 26}, {0, 9, 12, 20}, {5, 18, 22, 30}};
    vector<int> ans = getMinRange(a);
    cout << ans[0] << ' ' << ans[1] << endl;
    return 0;
}