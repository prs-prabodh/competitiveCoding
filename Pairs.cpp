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

    int n, m;
    cin >> n >> m;
    vector<int> cmp;
    vector<pair<int, int>> ps;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ps.push_back({x, y});
    }
    cmp.push_back(ps[0].first);
    cmp.push_back(ps[0].second);
    for (int x = 0; x < 2; x++)
    {
        int all = 0;
        set<int> s;
        unordered_map<int, int> mp;
        for (int i = 1; i < m; i++)
        {
            int a, b;
            a = ps[i].first;
            b = ps[i].second;
            if ((a != cmp[x] && b != cmp[x]))
            {
                s.insert(a);
                s.insert(b);
                mp[a]++;
                mp[b]++;
                all++;
            }
        }
        int maxt = INT_MIN;
        for (auto i : s)
        {
            maxt = max(maxt, mp[i]);
        }
        if (s.empty() || maxt == all)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}