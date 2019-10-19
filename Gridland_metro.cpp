/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int gridlandMetro(int n, int m, int k, vector<vector<int>> &a)
{
    long long int occupied = 0LL;
    unordered_map<int, vector<pair<int, int>>> um;
    for (int i = 0; i < k; i++)
    {
        um[a[i][0]].push_back({a[i][1], a[i][2]});
    }
    for (auto i : um)
    {
        sort(i.second.begin(), i.second.end());
        int low = 0;
        for (auto j : i.second)
        {
            if (j.first <= low)
            {
                occupied += max(0, j.second - low);
            }
            else
            {
                low = max(low, j.first);
                occupied += max(0, (j.second - low + 1));
            }
            low = max(low, j.second);
        }
    }
    return (long long int)n * (long long int)m - occupied;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n = 2, m = 9, k = 3;
    vector<vector<int>> a = {{2, 1, 5}, {2, 2, 4}, {2, 8, 8}};
    cout << gridlandMetro(n, m, k, a) << endl;
    return 0;
}