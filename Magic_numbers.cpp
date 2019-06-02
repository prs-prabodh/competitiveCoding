/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string x;
int len;
bool *dp, *reg;
bool find(int i)
{
    if (i >= len)
        return true;
    if (dp[i])
        return dp[i];
    if (x.substr(i, 1) == "1")
    {
        if (find(i + 1))
        {
            dp[i] = true;
            reg[i] = true;
            return dp[i];
        }
    }
    if (x.substr(i, 2) == "14")
    {
        if (find(i + 2))
        {
            dp[i] = true;
            reg[i] = true;
            return dp[i];
        }
    }
    if (x.substr(i, 3) == "144")
    {
        if (find(i + 3))
        {
            dp[i] = true;
            reg[i] = true;
            return dp[i];
        }
    }
    dp[i] = false;
    reg[i] = false;
    return dp[i];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> x;
    len = x.length();
    reg = new bool[len + 1];
    dp = new bool[len + 1];
    memset(dp, 0, sizeof(bool) * (len + 1));
    memset(reg, 0, sizeof(bool) * (len + 1));
    find(0) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}