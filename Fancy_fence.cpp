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

    int test = 0;
    cin >> test;
    while (test--)
    {
        int a;
        cin >> a;
        int ans = 360 / (180 - a);
        (ans * (180 - a) == 360 && a > 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}