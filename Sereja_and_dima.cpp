/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;
int *a, n, l, r;
int pickCard()
{
    if (a[l] >= a[r])
    {
        return a[l++];
    }
    else
    {
        return a[r--];
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    a = new int[n];
    l = 0;
    r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            d += pickCard();
        }
        else
        {
            s += pickCard();
        }
    }
    cout << s << ' ' << d << endl;
    return 0;
}