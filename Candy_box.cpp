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

    int test = 0;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        set<pair<int, int>> cn;
        unordered_map<int, int> ct;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            cn.insert({x, y});
            ct[x]++;
        }
        vector<pair<int, int>> rec;
        for (auto i : cn)
        {
            rec.push_back({ct[i.first], i.second});
        }
        sort(rec.rbegin(), rec.rend());
        int k = rec[0].first, ans = k, len = rec.size();
        int ans1 = rec[0].second == 0 ? k : 0;
        for (int i = 1; i < len && k - 1 > 0; i++)
        {
            ans += min(k - 1, rec[i].first);
            k = min(k - 1, rec[i].first);
            if (rec[i].second == 0)
                ans1 += min(k - 1, rec[i].first);
        }
        cout << ans << ' ' << ans1 << endl;
    }
    return 0;
}