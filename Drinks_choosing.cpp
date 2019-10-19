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

    int n, k;
    cin >> n >> k;
    int ans = 0, extra = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto i : mp)
    {
        ans += (mp[i.first] / 2) * 2;
        if (mp[i.first] & 1)
        {
            extra++;
        }
    }
    // cout << ans << ' ' << extra << endl;
    ans += extra & 1 ? extra / 2 + 1 : extra / 2;
    cout << ans << endl;
    return 0;
}