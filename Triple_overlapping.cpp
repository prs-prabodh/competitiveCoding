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
        unordered_map<int, vector<vector<int>>> um;
        for (int i = 0; i < n; i++)
        {
            int l, r, v;
            cin >> l >> r >> v;
            if (um.count(v) == 0)
            {
                um[v] = {{}, {}};
            }
            um[v][0].push_back(l);
            um[v][1].push_back(r);
        }
        int l = -1, cnt = 1;
        bool overlapping = false;
        for (auto vel : um)
        {
            if (overlapping)
                break;
            sort(vel.second[0].begin(), vel.second[0].end());
            sort(vel.second[1].begin(), vel.second[1].end());
            int i = 0, j = 0, len = vel.second[0].size(), segs = 0;
            while (j < len)
            {
                if (i < len)
                {
                    if (vel.second[0][i] <= vel.second[1][j])
                    {
                        segs++;
                        if (segs >= 3)
                        {
                            overlapping = true;
                            break;
                        }
                        i++;
                    }
                    else
                    {
                        segs--;
                        j++;
                    }
                }
                else
                {
                    segs--;
                    j++;
                }
            }
        }
        overlapping ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}