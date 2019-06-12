/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
const ld PI = 3.14159265359;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ld n, r;
    cin >> n >> r;
    ld theta = (ld)(360 / n) * (PI / 180);
    cout << fixed;
    ld ans = (ld)r / ((ld)(1 / sinl(theta / 2)) - 1.00);
    cout << setprecision(20) << ans << endl;
    return 0;
}