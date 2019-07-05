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

    int n, q;
    cin >> n >> q;
    deque<int> dq;
    vector<pair<int, int>> v;
    int mxm = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.emplace_back(x);
        if (i > 0)
        {
            v.push_back({mxm, x});
        }
        mxm = max(mxm, x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x = dq.front();
        dq.pop_front();
        int y = dq.front();
        dq.pop_front();
        dq.emplace_front(max(x, y));
        dq.emplace_back(min(x, y));
    }
    for (int i = 0; i < q; i++)
    {
        ll m;
        cin >> m;
        if (m <= n - 1)
        {
            cout << v[m - 1].first << ' ' << v[m - 1].second << endl;
        }
        else
        {
            cout << dq[0] << ' ' << dq[((m - n) % (n - 1)) + 1] << endl;
        }
    }
    return 0;
}