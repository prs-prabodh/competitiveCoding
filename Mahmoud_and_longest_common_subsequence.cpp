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
    if (x == y)
    {
        cout << -1 << endl;
    }
    else
    {
        int xlen = x.length();
        int ylen = y.length();
        cout << max(xlen, ylen) << endl;
    }
    return 0;
}