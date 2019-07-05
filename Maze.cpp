/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int n, m, k;
vector<vector<int>> e;
unordered_map<int, bool> wall;
char **a;
bool *vis;

void dfs_traversal(int node)
{
    vis[node] = true;
    int ct = 0;
    for (int i = 0; i < e[node].size(); i++)
    {
        if (!vis[e[node][i]])
        {
            dfs_traversal(e[node][i]);
        }
    }
    if (k)
    {
        wall[node] = true;
        k--;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m >> k;
    a = new char *[n];
    vis = new bool[(n * m)];
    memset(vis, 0, sizeof(bool) * (n * m));
    e.resize(n * m, vector<int>());
    for (int i = 0; i < n; i++)
    {
        a[i] = new char[m + 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '#')
                continue;
            if (j < m - 1 && a[i][j + 1] == '.')
            {
                e[i * m + j].push_back(i * m + (j + 1));
                e[i * m + (j + 1)].push_back(i * m + j);
            }
            if (i < n - 1 && a[i + 1][j] == '.')
            {
                e[i * m + j].push_back(((i + 1) * m) + j);
                e[((i + 1) * m) + j].push_back(i * m + j);
            }
        }
    }
    bool found = false;
    for (int i = 0; i < n && !found; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                dfs_traversal(i * m + j);
                found = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            wall[i * m + j] ? cout << 'X' : cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}