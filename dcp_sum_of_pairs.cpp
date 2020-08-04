/*
*	@author Prabodh Ranjan Swain
*	Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int M = 1e9 + 7;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, bool> um;
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (um.find(k - x) != um.end())
            {
                ans = true;
                break;
            }
            um[x] = true;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}