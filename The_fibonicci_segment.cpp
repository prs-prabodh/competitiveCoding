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
    int n, a = 0, b = 0, c = 0;
    cin >> n;
    int l = 0, i = 0, maxLen = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        (i - l + 1 < 3 || a + b == c)
            ? maxLen = max(maxLen, i - l + 1)
            : l = i - 1;
        a = b;
        b = c;
    }
    cout << maxLen << endl;
    return 0;
}