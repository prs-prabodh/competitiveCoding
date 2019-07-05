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

    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    unordered_map<int, vector<int>> um;
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        um[b[j]].push_back(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int s = um[c[i]].size();
        cout << um[c[i]][s - 1] << ' ';
        um[c[i]].pop_back();
    }
    return 0;
}