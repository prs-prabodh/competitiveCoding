/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int calc(string x)
{
    int ans = 0;
    ans += min(26 - abs('A' - x[0]), abs('A' - x[0]));
    ans += min(26 - abs('C' - x[1]), abs('C' - x[1]));
    ans += min(26 - abs('T' - x[2]), abs('T' - x[2]));
    ans += min(26 - abs('G' - x[3]), abs('G' - x[3]));
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    string x;
    cin >> x;
    int ans = INT_MAX;
    for (int i = 0; i <= n - 4; i++)
    {
        ans = min(ans, calc(x.substr(i, 4)));
    }
    cout << ans << endl;
    return 0;
}