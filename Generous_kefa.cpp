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
    string x;
    cin >> x;
    int f[26], mxm = INT_MIN;
    memset(f, 0, sizeof(int) * 26);
    for (int i = 0; i < n; i++)
    {
        f[x[i] - 'a']++;
        mxm = max(mxm, f[x[i] - 'a']);
    }
    mxm <= k ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}