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

    string x, y;
    cin >> x >> y;
    int ylen = y.length(), limit = x.length() - ylen, p = 0, cnt = 0;
    while (p <= limit)
    {
        if (x.substr(p, ylen) == y)
        {
            cnt++;
            p += ylen;
            continue;
        }
        p++;
    }
    cout << cnt << endl;
    return 0;
}