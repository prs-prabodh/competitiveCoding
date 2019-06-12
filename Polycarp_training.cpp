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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int i = 1;
    while (i <= n)
    {
        auto x = lower_bound(a, a + n, i);
        if (x == a + n)
        {
            break;
        }
        *x = -1;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}