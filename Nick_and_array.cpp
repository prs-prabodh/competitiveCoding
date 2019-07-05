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
    int a[n], index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
        {
            a[i] = -a[i] - 1;
        }
        if (abs(a[index]) < abs(a[i]))
        {
            index = i;
        }
    }
    if (n % 2)
    {
        a[index] = (-a[index] - 1);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}