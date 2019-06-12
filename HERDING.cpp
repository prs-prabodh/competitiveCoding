/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

unordered_map<int, vector<int>> e;
unordered_map<int, bool> v;
int n, m;

void dfs(int x)
{
    v[x] = true;
    for (auto i : e[x])
    {
        if (!v[i])
        {
            dfs(i);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            int pt;
            switch (c)
            {
            case 'N':
                pt = (i - 1) * m + j;
                break;
            case 'E':
                pt = i * m + j + 1;
                break;
            case 'S':
                pt = (i + 1) * m + j;
                break;
            case 'W':
                pt = i * m + j - 1;
                break;
            }
            e[i * m + j].push_back(pt);
            e[pt].push_back(i * m + j);
        }
    }
    int traps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!v[i * m + j])
            {
                traps++;
                dfs(i * m + j);
            }
        }
    }
    cout << traps << endl;
    return 0;
}