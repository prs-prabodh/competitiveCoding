/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
const ll MAX_WATER_IN_TOWN = 10e18;

int n, s, *cap;
bool overDemand = false;
vector<vector<int>> e;

ll maxReq(int node, int parent)
{
    if ((e[node].size() == 1 && node != s) || e[node].size() == 0)
    {
        return (ll)cap[node];
    }
    else
    {
        ll maxNeigh = LLONG_MIN;
        int neigh = e[node].size();
        if (node != s)
            neigh--;
        for (int i = 0; i < e[node].size(); i++)
        {
            if (e[node][i] != parent)
            {
                maxNeigh = max(maxNeigh, maxReq(e[node][i], node));
            }
        }
        ll ans = cap[node] + neigh * maxNeigh;
        if (ans > 10e18 || ans < 0)
        {
            overDemand = true;
            return 0;
        }
        return ans;
    }
}

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
        cin >> n >> s;
        s--;
        cap = new int[n + 1];
        e.clear();
        e.resize(n + 1, vector<int>());
        for (int i = 0; i < n; i++)
        {
            cin >> cap[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            e[x].push_back(y);
            e[y].push_back(x);
        }
        ll ans = maxReq(s, -1);
        overDemand ? cout << -1 << endl : cout << ans << endl;
    }
    return 0;
}