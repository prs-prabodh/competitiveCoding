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
bool *unruly;
set<int> ans;

void dfs(int n)
{
    if (unruly[n])
    {
        int i;
        for (i = 0; i < e[n].size(); i++)
        {
            if (!unruly[e[n][i]])
                break;
        }
        if (i == e[n].size())
        {
            ans.insert(n);
        }
    }
    for (int i = 0; i < e[n].size(); i++)
    {
        dfs(e[n][i]);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, root;
    cin >> n;
    e.resize(n + 1);
    unruly = new bool[n + 1];
    memset(unruly, 0, sizeof(bool) * (n + 1));
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0)
        {
            root = i;
            continue;
        }
        e[x].push_back(i);
        unruly[i] = y;
    }
    dfs(root);
    if (ans.size() == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    for (auto i : ans)
        cout << i << " ";
    return 0;
}