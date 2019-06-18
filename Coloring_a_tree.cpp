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
bool *vis;
int *c;
int ans = 0;

void dfs(int n, int curr)
{
    vis[n] = true;
    if (c[n] != curr)
    {
        ans++;
        curr = c[n];
    }
    for (int i = 0; i < e[n].size(); i++)
    {
        if (!vis[e[n][i]])
            dfs(e[n][i], curr);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    e.resize(n + 1);
    vis = new bool[n + 1];
    memset(vis, 0, sizeof(bool) * (n + 1));
    c = new int[n + 1];
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        e[i].push_back(x);
        e[x].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    dfs(1, 0);
    cout << ans << endl;
    return 0;
}