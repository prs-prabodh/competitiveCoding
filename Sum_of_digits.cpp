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

    string x;
    cin >> x;
    int ans = 0, cnt = 0;
    while (x.length() > 1)
    {
        for (int i = 0; i < x.length(); i++)
        {
            ans += x[i] - '0';
        }
        x = to_string(ans);
        ans = 0;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}