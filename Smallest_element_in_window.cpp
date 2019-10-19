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

    int test = 0;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        deque<pair<int, int>> dq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i < k)
            {
                while (!dq.empty() && dq.back().second < x)
                {
                    dq.pop_back();
                }
                dq.push_back({i, x});
                if (i == k - 1)
                    cout << dq.front().second << ' ';
                continue;
            }
            while (!dq.empty() && dq.front().first <= i - k)
            {
                dq.pop_front();
            }
            while (!dq.empty() && dq.back().second < x)
            {
                dq.pop_back();
            }
            dq.push_back({i, x});
            cout << dq.front().second << ' ';
        }
        cout << endl;
    }
    return 0;
}