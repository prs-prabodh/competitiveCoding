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

    string x;
    cin >> x;
    int len = x.length(), curr = 0, currgrp = 0;
    ll dp = 0LL;
    while (x[curr] != 'a' && curr < len)
        curr++;
    for (curr; curr < len; curr++)
    {
        if (x[curr] == 'a')
        {
            currgrp++;
        }
        else if (x[curr] == 'b')
        {
            if (currgrp > 0)
            {
                dp = (dp + ((dp + 1) % M * currgrp % M) % M) % M;
                currgrp = 0;
            }
        }
    }
    dp = (dp + ((dp + 1) % M * currgrp % M) % M) % M;
    cout << dp << endl;
    return 0;
}