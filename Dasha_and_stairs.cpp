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

    int a, b;
    cin >> a >> b;
    abs(a - b) > 1 || (a == 0 && b == 0) ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}