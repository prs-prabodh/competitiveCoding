/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<vector<int>> ans;

void findSubsets(vector<int> a, int n, int sum)
{
    // cout << n << ' ' << sum << endl;
    for (int i = 1; i < 100; i += 2)
    {
        a.push_back(i);
        if (sum + i == 100 && n == 1)
        {
            ans.push_back(a);
            for (auto i : a)
            {
                cout << i << ' ';
            }
            cout << endl;
        }
        else if (n - 1 > 0 && sum + i < 100)
        {
            findSubsets(a, n - 1, sum + i);
        }
        a.pop_back();
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a;
    findSubsets(a, 9, 0);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}