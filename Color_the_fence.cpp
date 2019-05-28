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
    vector<pair<int, int>> a;
    int cost[10];
    for (int i = 1; i < 10; i++)
    {
        cin >> cost[i];
        a.push_back({cost[i], i});
    }
    sort(a.begin(), a.end());
    int digs = n / a[0].first;
    if (digs < 1)
    {
        cout << "-1" << endl;
        return 0;
    }
    string ans = "";
    for (int i = 0; i < digs; i++)
    {
        ans += string(1, (char)(a[0].second + '0'));
    }
    n -= digs * a[0].first;
    for (int i = 0; i < digs; i++)
    {
        for (int j = 9; j > 0; j--)
        {
            if (cost[ans[i] - '0'] + n >= cost[j])
            {
                n -= cost[j] - cost[ans[i] - '0'];
                ans[i] = '0' + j;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}