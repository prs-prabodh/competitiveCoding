/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool up(ld x)
{
    return (x - floor(x) > 0) ? true : false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // cout << up(3.14) << endl;
    int n;
    cin >> n;
    ld a[n];
    ll pos = 0LL, neg = 0LL;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            neg += (ll)floor(a[i]);
        }
        else
        {
            pos += (ll)floor(a[i]);
        }
    }
    ll diff = abs(neg) - abs(pos);
    for (int i = 0; i < n && diff > 0; i++)
    {
        if (up(a[i]))
        {
            a[i] = ceil(a[i]);
            diff--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = floor(a[i]);
        if (a[i] == 0)
            a[i] = 0.00;
        cout << floor(a[i]) << endl;
    }
    return 0;
}