/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool *cats, *visited;
vector<vector<int>> e;
int paths = 0, n, m;
void travel(int node, int curr, int mx)
{
    visited[node] = true;
    if (cats[node])
    {
        curr++;
    }
    else
    {
        curr = 0;
    }
    mx = max(mx, curr);
    if (e[node].size() == 1 && node != 1 && mx <= m)
    {
        paths++;
    }
    for (int i = 0; i < e[node].size(); i++)
    {
        if (!visited[e[node][i]])
            travel(e[node][i], curr, mx);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m;
    cats = new bool[n + 1];
    visited = new bool[n + 1];
    memset(visited, 0, sizeof(bool) * (n + 1));
    e.resize(n + 1, vector<int>());
    for (int i = 0; i < n; i++)
        cin >> cats[i + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    travel(1, 0, 0);
    cout << paths << endl;
    return 0;
}