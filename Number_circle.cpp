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
    if (a[n - 1] >= a[n - 2] + a[n - 3])
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    int t;
    t = a[n - 1], a[n - 1] = a[n - 2], a[n - 2] = t;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}