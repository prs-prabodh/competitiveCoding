/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int equalizeArray(vector<int> a)
{
    unordered_map<int, int> um;
    int maxn = INT_MIN;
    for (auto i : a)
    {
        um[i]++;
        maxn = max(um[i], maxn);
    }
    return a.size() - maxn;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {3, 3, 1, 2, 3};
    int size = 5;
    cout << equalizeArray(a) << endl;
    return 0;
}