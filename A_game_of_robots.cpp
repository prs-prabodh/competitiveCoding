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
        string s;
        cin >> s;
        vector<pair<int, int>> ranges;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                ranges.push_back({max(0, i - (s[i] - '0')), min(n - 1, i + (s[i] - '0'))});
            }
        }
        sort(ranges.begin(), ranges.end());
        int l = -1;
        bool safe = true;
        for (auto range : ranges)
        {
            if (l >= range.first)
            {
                safe = false;
                break;
            }
            else
            {
                l = range.second;
            }
        }
        safe ? cout << "safe" << endl : cout << "unsafe" << endl;
    }
    return 0;
}