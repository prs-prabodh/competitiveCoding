/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string comp(string x, string y)
{
    int xlen = x.length();
    int ylen = y.length();
    if (xlen == ylen)
    {
        return x > y ? y : x;
    }
    else if (xlen > ylen)
        return y;
    else
        return x;
}

string add(string x, string y)
{
    int xlen = x.length();
    int ylen = y.length();
    int len = max(xlen, ylen) - min(xlen, ylen);
    if (xlen < ylen)
    {
        while (len-- > 0)
            x = "0" + x;
    }
    else
    {
        while (len-- > 0)
            y = "0" + y;
    }
    y = "0" + y;
    x = "0" + x;
    len = max(xlen, ylen) + 1;
    int c = 0;
    string ans = "";
    for (int i = len - 1; i >= 0; i--)
    {
        int a = x[i] - '0';
        int b = y[i] - '0';
        int x = a + b + c;
        if (x > 9)
            c = 1;
        else
            c = 0;
        ans = to_string(x % 10) + ans;
    }
    return ans[0] == '0' ? ans.substr(1) : ans;
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
    int i = n / 2, j = n / 2;
    while (i > 0 && x[i] == '0')
        i--;
    while (j < n && x[j] == '0')
        j++;
    if (i == j)
    {
        i++;
    }
    string ans;
    if (j == n && i == 0)
    {
        ans = add(x.substr(0, n - 1), x.substr(n - 1));
    }
    else
    {
        ans = comp(add(x.substr(0, j), x.substr(j)), add(x.substr(0, i), x.substr(i)));
    }
    cout << ans << endl;
    return 0;
}