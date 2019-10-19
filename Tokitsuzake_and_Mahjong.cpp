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

    unordered_map<char, vector<int>> m;
    for (int i = 0; i < 3; i++)
    {
        string x;
        cin >> x;
        m[x[1]].push_back(x[0] - '0');
    }
    int k = 2, me = 2;
    for (auto i : m)
    {
        sort(i.second.begin(), i.second.end());
        int t = 1;
        for (int j = 1; j < i.second.size(); j++)
        {
            if (i.second[j] == i.second[j - 1])
            {
                t++;
                k = min(3 - t, k);
            }
            else
            {
                t = 1;
            }
        }
    }
    for (auto i : m)
    {
        sort(i.second.begin(), i.second.end());
        int t = 1;
        for (int j = 1; j < i.second.size(); j++)
        {
            if (i.second[j] == i.second[j - 1] + 1 && i.second[j - 1] != '9')
            {
                t++;
                me = min(3 - t, me);
            }
            else if (i.second[j] == i.second[j - 1] + 2 && i.second[j - 1] != '9')
            {
                t = 2;
                me = min(3 - t, me);
                break;
            }
            else
            {
                t = 1;
            }
        }
    }
    cout << min(k, me) << endl;
    return 0;
}