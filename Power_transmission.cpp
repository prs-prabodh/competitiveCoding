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
    vector<pair<ld, ld>> pts;
    for (int i = 0; i < n; i++)
    {
        ld x, y;
        cin >> x >> y;
        pts.push_back({x, y});
    }
    set<ld> s;
    unordered_map<ld, set<pair<int, int>>> bank;
    int all = 0;
    unordered_map<ld, int> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pair<ld, ld> x = pts[i];
            pair<ld, ld> y = pts[j];
            ld slope;
            if (y.first == x.first)
                slope = INFINITY;
            else
                slope = (ld)(y.second - x.second) / (y.first - x.first);
            if (s.find(slope) != s.end())
            {
                if (bank[slope].find(x) != bank[slope].end() || bank[slope].find(y) != bank[slope].end())
                {
                    bank[slope].insert(x);
                    bank[slope].insert(y);
                    continue;
                }
            }
            s.insert(slope);
            bank[slope].insert(x);
            bank[slope].insert(y);
            m[slope]++;
            all++;
        }
    }
    ll ans = 0LL;
    for (auto i : s)
    {
        all -= m[i];
        ans += m[i] * all;
    }
    cout << ans << endl;
    return 0;
}