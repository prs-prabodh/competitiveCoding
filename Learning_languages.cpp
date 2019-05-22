/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
int imagLang = 0;
unordered_map<int, vector<int>> e;
bool *visited;
void dfs(int i)
{
    visited[i] = true;
    for (int x = 0; x < e[i].size(); x++)
    {
        if (!visited[e[i][x]])
        {
            dfs(e[i][x]);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    visited = new bool[m + 1];
    memset(visited, false, sizeof(bool) * (m + 1));
    set<int> l;
    for (int i = 0; i < n; i++)
    {
        int lcount;
        cin >> lcount;
        vector<int> ls;
        if (lcount == 0)
        {
            imagLang++;
        }
        for (int j = 0; j < lcount; j++)
        {
            int x;
            cin >> x;
            ls.push_back(x);
        }
        for (int a = 0; a < ls.size(); a++)
        {
            l.insert(ls[a]);
            for (int b = a + 1; b < ls.size(); b++)
            {
                e[ls[a]].push_back(ls[b]);
                e[ls[b]].push_back(ls[a]);
            }
        }
    }
    int cnt = 0;
    for (auto i : l)
    {
        if (!visited[i])
        {
            cnt++;
            dfs(i);
        }
    }
    cout << max(0, cnt - 1) + imagLang << endl;
    return 0;
}