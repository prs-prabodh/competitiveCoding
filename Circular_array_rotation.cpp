/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<int> getValue(vector<int> a, int k, vector<int> queries)
{
    int n = a.size();
    int end = n - 1 - (k % n);
    int start = (end + 1) % n;
    vector<int> ans;
    for (auto i : queries)
    {
        ans.push_back(a[(start + i) % n]);
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 2, 3};
    vector<int> queries = {0, 1, 2};
    int k = 8;
    vector<int> ans = getValue(a, k, queries);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}