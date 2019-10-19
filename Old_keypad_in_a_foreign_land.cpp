/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll minTaps(vector<int> freq, vector<int> cap)
{
    sort(freq.rbegin(), freq.rend());
    sort(cap.begin(), cap.end());
    int le = 0, re = cap.size(), p = 0, level = 1;
    ll ans = 0LL;
    for (auto i : freq)
    {
        // cout << i << ' ' << cap[p] << ' ' << level << endl;
        cap[p]--;
        if (le == p && cap[p] == 0)
        {
            le++;
        }
        ans += level * i;
        p++;
        if (p == re)
        {
            p = le;
            level++;
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> freq(n);
    for (int i = 0; i < n; i++)
        cin >> freq[i];
    int m, totalCap = 0;
    cin >> m;
    vector<int> cap(m);
    for (int i = 0; i < m; i++)
    {
        cin >> cap[i];
        totalCap += cap[i];
    }
    if (totalCap < n)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << minTaps(freq, cap) << endl;
    return 0;
}