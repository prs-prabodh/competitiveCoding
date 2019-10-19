/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool custom(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

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
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            jobs.push_back({y, z});
        }
        sort(jobs.begin(), jobs.end(), custom);
        // for (auto i : jobs)
        //     cout << i.first << ' ' << i.second << endl;
        // cout << endl;
        bool slots[n];
        memset(slots, false, sizeof(bool) * n);
        int t = 0, profit = 0;
        for (auto i : jobs)
        {
            for (int j = min(n, i.first) - 1; j >= 0; j--)
            {
                if (!slots[j])
                {
                    slots[j] = true;
                    profit += i.second;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (slots[i])
                t++;
        }
        cout << t << ' ' << profit << endl;
    }
    return 0;
}