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
    string s;
    cin >> s;
    int f[2];
    f[0] = f[1] = 0;
    for (int i = 0; i < n; i++)
    {
        f[s[i] - '0']++;
    }
    if (f[0] != f[1])
    {
        cout << 1 << endl
             << s << endl;
    }
    else
    {
        cout << 2 << endl
             << s.substr(0, n - 1) << " " << s.substr(n - 1) << endl;
    }
    return 0;
}