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
    int cnt = 0, i = 0, lastZero = -1, target = (1 << (int)(floor(log2(n)) + 1)) - 1;
    vector<int> ans;
    while (n < target)
    {
        for (i = 0; n >= (1 << i); i++)
        {
            if ((n & (1 << i)) == 0)
            {
                lastZero = i;
            }
        }
        ans.push_back(lastZero + 1);
        n ^= (1 << (lastZero + 1)) - 1;
        cnt++;
        if (n < target)
        {
            n++;
            cnt++;
        }
    }
    cout << cnt << endl;
    for (auto i : ans)
        cout << i << ' ';
    return 0;
}