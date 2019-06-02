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
bool *visited;
int n, d;

bool dfs(int node)
{
    visited[node] = true;
    if (node == d)
        return true;
    for (int i = 0; i < e[node].size(); i++)
    {
        if (!visited[e[node][i]])
        {
            if (dfs(e[node][i]))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> d;
    e.resize(n + 1, vector<int>());
    visited = new bool[n + 1];
    memset(visited, 0, sizeof(bool) * (n + 1));
    for (int i = 1; i <= n - 1; i++)
    {
        int offset;
        cin >> offset;
        e[i].push_back(i + offset);
    }
    dfs(1) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}