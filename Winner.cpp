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
    set<string> s;
    unordered_map<string, vector<pair<int, int>>> a;
    for (int i = 0; i < n; i++)
    {
        string name;
        int pts;
        cin >> name >> pts;
        if (a[name].size() == 0)
        {
            a[name].push_back({i, pts});
            s.insert(name);
            continue;
        }
        int prevPts = a[name][a[name].size() - 1].second;
        a[name].push_back({i, prevPts + pts});
    }
    string ans;
    int pts = INT_MIN;
    for (auto i : s)
    {
        if (a[i][a[i].size() - 1].second > pts)
        {
            pts = a[i][a[i].size() - 1].second;
            ans = i;
        }
    }
    int rounds = INT_MAX;
    for (auto i : s)
    {
        if (a[i][a[i].size() - 1].second == pts)
        {
            for (auto j : a[i])
            {
                if (j.second >= pts && rounds > j.first)
                {
                    ans = i;
                    rounds = j.first;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}