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

    ll x, y, z;
    cin >> x >> y >> z;
    ll ansX = x / z;
    ll xExtra = x - (ansX * z);
    ll ansY = y / z;
    ll yExtra = y - (ansY * z);
    ll moreReq = (xExtra + yExtra) / z;
    ll maxAns = ansX + ansY + moreReq;
    ll minAmount = max(min((moreReq * z) - xExtra, (moreReq * z) - yExtra), 0LL);
    cout << maxAns << ' ' << minAmount << endl;
    return 0;
}