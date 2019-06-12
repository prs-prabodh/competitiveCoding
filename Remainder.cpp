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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int p = 0, cnt = 0;
    reverse(s.begin(), s.end());
    while (p < x)
    {
        if (p == y)
        {
            if (s[p] != '1')
                cnt++;
        }
        else
        {
            if (s[p] != '0')
                cnt++;
        }
        p++;
    }
    cout << cnt << endl;
    return 0;
}