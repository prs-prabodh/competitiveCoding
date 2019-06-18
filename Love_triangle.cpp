/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int *e;
bool *vis, ans = false;

void dfs(int root, int n, int len)
{
    vis[n] = true;
    if (e[n] == root && len == 3)
    {
        ans = true;
        return;
    }
    if (!vis[e[n]])
        dfs(root, e[n], len + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    e = new int[n + 1];
    vis = new bool[n + 1];
    memset(vis, false, sizeof(bool) * (n + 1));
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        e[i] = x;
    }
    for (int i = 1; i <= n && !ans; i++)
    {
        memset(vis, false, sizeof(bool) * (n + 1));
        dfs(i, i, 1);
    }
    ans ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}