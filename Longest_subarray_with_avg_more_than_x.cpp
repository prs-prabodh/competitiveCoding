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

    int n, x, sum = 0;
    cin >> n >> x;
    vector<pair<int, int>> presum;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += (a[i] - x);
        presum.push_back({sum, i});
    }
    sort(presum.begin(), presum.end());
    int minInd[n];
    minInd[0] = presum[0].second;
    for (int i = 1; i < n; i++)
    {
        minInd[i] = min(minInd[i - 1], presum[i].second);
    }
    sum = 0;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] - x;
        int ind = -1, l = 0, r = i;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (presum[m].first <= sum)
            {
                ind = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        if (ind < 0 || minInd[ind] >= i)
        {
            len = max(0, len);
        }
        else if (sum >= 0)
        {
            len = max(i + 1, len);
        }
        else
        {
            len = max(len, i - minInd[ind]);
        }
    }
    cout << len << endl;
    return 0;
}