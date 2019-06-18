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
    string x, ans = "";
    cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '0')
        {
            ans += to_string(cnt);
            cnt = 0;
        }
        else
        {
            cnt++;
        }
    }
    ans += to_string(cnt);
    cout << ans << endl;
    return 0;
}