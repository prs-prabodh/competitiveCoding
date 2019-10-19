/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<int> solve(vector<int> a, int target)
{
    unordered_map<int, int> um;
    vector<int> ans(2);
    for (int i = 0; i < a.size(); i++)
    {
        if (um.find(target - a[i]) != um.end())
        {
            ans[0] = um[target - a[i]];
            ans[1] = i;
            break;
        }
        um[a[i]] = i;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = solve(a, target);
    for (auto i : ans)
        cout << i << ' ';
    return 0;
}