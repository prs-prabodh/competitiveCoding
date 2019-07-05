/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<vector<int>> rec;

bool valid(int x, vector<int> t)
{
    for (int i = 0; i < 26; i++)
    {
        if (rec[x][i] < t[i])
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
    int n, m;
    cin >> n;
    string s;
    cin >> s >> m;
    rec.resize(n);
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++)
    {
        f[s[i] - 'a']++;
        rec[i] = f;
    }
    for (int i = 0; i < m; i++)
    {
        string x;
        cin >> x;
        vector<int> t(26, 0);
        int len = x.length();
        for (int i = 0; i < len; i++)
            t[x[i] - 'a']++;
        int l = 0, r = n, ans = 0;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (valid(m, t))
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}