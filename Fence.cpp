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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = accumulate(a, a + k, 0);
    ll t = sum;
    int index = 1;
    for (int i = k; i < n; i++)
    {
        t = t - a[i - k] + a[i];
        if (t < sum)
        {
            index = i - k + 2;
            sum = t;
        }
    }
    cout << index << endl;
    return 0;
}