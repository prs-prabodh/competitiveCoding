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
    ll a[n], b[n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        cin >> b[i];
    }
    a[0] = 0LL;
    a[n - 1] = b[0];
    for (int i = 1, j = n - 2; i < n / 2; i++, j--)
    {
        a[i] = a[i - 1] + max(b[i] - a[i - 1] - a[j + 1], 0LL);
        a[j] = b[i] - a[i];
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}