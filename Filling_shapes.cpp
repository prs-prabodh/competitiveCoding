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

    ll n;
    cin >> n;
    if (n % 2LL)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << (1LL << (n / 2LL)) << endl;
    }
    return 0;
}