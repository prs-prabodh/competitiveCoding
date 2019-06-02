/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<vector<int>> e;
vector<int> t;
bool *vis;

void dfs(int n)
{
    vis[n] = true;
    t.push_back(n);
    for (int i = 0; i < e[n].size(); i++)
    {
        if (!vis[e[n][i]])
        {
            dfs(e[n][i]);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    e.resize(n + 1);
    vis = new bool[n + 1];
    memset(vis, 0, sizeof(bool) * (n + 1));
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            continue;
        }
        if (k == 1)
        {
            cin >> k;
            continue;
        }
        else
        {
            k--;
            int a;
            cin >> a;
            while (k--)
            {
                int b;
                cin >> b;
                e[a].push_back(b);
                e[b].push_back(a);
            }
        }
    }
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            t.clear();
            dfs(i);
            for (auto i : t)
            {
                ans[i] = t.size();
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}