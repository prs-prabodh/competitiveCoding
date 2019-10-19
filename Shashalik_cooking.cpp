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

    int n, k;
    cin >> n >> k;
    int d = 2 * k + 1;
    int q = n / d, r = n % d;
    if (r != 0)
    {
        q++;
    }
    else
    {
        r = 2 * k;
    }
    cout << q << endl;
    for (int i = r / 2 + 1; i <= n; i += d)
    {
        cout << i << ' ';
    }
    return 0;
}