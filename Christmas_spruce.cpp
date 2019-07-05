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
    int n;
    cin >> n;
    vector<vector<int>> e(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        e[x].push_back(i);
    }
    unordered_map<int, bool> leaf;
    for (int i = 1; i <= n; i++)
    {
        if (e[i].size() == 0)
        {
            leaf[i] = true;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (e[i].size() > 0)
        {
            int cnt = 0;
            for (int j = 0; j < e[i].size(); j++)
            {
                cnt += leaf[e[i][j]] ? 1 : 0;
            }
            if (cnt < 3)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}