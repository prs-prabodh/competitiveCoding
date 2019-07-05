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
    ll dist[n + 1], parent[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dist[i] = LLONG_MAX;
        parent[i] = -1LL;
    }
    vector<vector<pair<int, ll>>> e(n + 1);
    for (int i = 0; i < m; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        e[x].push_back({y, w});
        e[y].push_back({x, w});
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push({0, 1});
    parent[1] = 1;
    dist[1] = 0;
    while (!q.empty())
    {
        pair<ll, int> x = q.top();
        q.pop();
        for (int i = 0; i < e[x.second].size(); i++)
        {
            pair<int, ll> adj = e[x.second][i];
            if (dist[adj.first] > x.first + adj.second)
            {
                parent[adj.first] = x.second;
                dist[adj.first] = x.first + adj.second;
                q.push({dist[adj.first], adj.first});
            }
        }
    }
    int p = n;
    list<int> ans;
    do
    {
        ans.push_front(p);
        p = parent[p];
        if (p < 0)
        {
            cout << -1 << endl;
            return 0;
        }
    } while (p != 1);
    ans.push_front(p);
    for (auto i : ans)
    {
        cout << i << ' ';
    }
    return 0;
}