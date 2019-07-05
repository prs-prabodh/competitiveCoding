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

    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    int d;
    cin >> d;
    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        ans += max(0, d - (a[i + 1] - a[i]));
    }
    cout << ans << endl;
    return 0;
}