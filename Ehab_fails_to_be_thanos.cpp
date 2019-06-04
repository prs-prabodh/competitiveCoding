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

    int n, tot = 0;
    cin >> n;
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }
    sort(a, a + 2 * n);
    int curr = 0;
    for (int i = 0; i < n; i++)
        curr += a[i];
    if (2 * curr == tot)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < 2 * n; i++)
            cout << a[i] << ' ';
    }
    return 0;
}