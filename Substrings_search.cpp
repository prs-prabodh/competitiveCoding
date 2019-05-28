/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool find(string x, string y)
{
    int xlen = x.length();
    int ylen = y.length();
    if (xlen > ylen)
        return false;
    for (int i = 0; i <= ylen - xlen; i++)
    {
        if (y.substr(i, xlen) == x)
        {
            return true;
        }
    }
    return false;
}

bool valid(vector<pair<int, string>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first != i + 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<pair<int, string>> v;
    unordered_map<string, int> m;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.insert(x);
        m[x]++;
    }
    for (auto i : s)
    {
        int cnt = 0;
        for (auto j : s)
        {
            if (find(i, j))
            {
                cnt++;
            }
        }
        v.push_back({cnt, i});
    }
    sort(v.begin(), v.end());
    if (valid(v))
    {
        cout << "YES" << endl;
        sort(v.rbegin(), v.rend());
        for (auto i : v)
        {
            for (int j = 0; j < m[i.second]; j++)
            {
                cout << i.second << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}