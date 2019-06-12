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
    string x;
    cin >> x;
    int len = x.length();
    ll ans = LLONG_MIN;
    for (int i = 0; i <= len; i++)
    {
        ll t = 1;
        bool flag = false;
        for (int j = 0; j < len; j++)
        {
            int curr;
            if (j < i)
                curr = x[j] - '0';
            else if (j == i)
                curr = x[j] - '1';
            else
                curr = 9;
            if (curr > 0)
            {
                t *= curr;
                flag = true;
            }
            else
            {
                if (flag)
                    t *= curr;
                else
                    continue;
            }
        }
        ans = max(ans, t);
    }
    cout << ans << endl;
    return 0;
}