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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        a[i] = a[i] ? -1 : 1;
    }
    int maxAns = INT_MIN, newAns = 0;
    for (int i = 0; i < n; i++)
    {
        newAns += a[i];
        maxAns = max(maxAns, newAns + sum);
        if (newAns < 0)
        {
            newAns = 0;
        }
    }
    cout << maxAns << endl;
    return 0;
}