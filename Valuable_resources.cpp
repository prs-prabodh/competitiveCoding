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
    ll minX = LLONG_MAX, maxX = LLONG_MIN, minY = LLONG_MAX, maxY = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        minX = min(minX, x);
        maxX = max(maxX, x);
        minY = min(minY, y);
        maxY = max(maxY, y);
    }
    ll xLen = maxX - minX;
    ll yLen = maxY - minY;
    cout << max(xLen, yLen) * max(xLen, yLen) << endl;
    return 0;
}