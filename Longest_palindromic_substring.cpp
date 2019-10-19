/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string longestPalindrome(string a)
{
    int n = a.length(), start = 0, maxLen = 1;
    if (n == 0)
        return "";
    string newA = "";
    string copy = a;
    for (int i = 0, j = 0; i < 2 * n + 1; i++)
    {
        newA += i % 2 ? a[j++] : '$';
    }
    a = newA;
    // cout << a << endl;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        int len = 0, x = i, y = i;
        while (x > 0 && y < 2 * n + 1 && a[x] == a[y])
        {
            if (a[x] == a[y] && a[x] != '$')
            {
                len++;
                if (x != y)
                    len++;
                if (maxLen < len)
                {
                    start = ((x + 1) / 2) - 1;
                    maxLen = len;
                }
            }
            x--;
            y++;
        }
    }
    return copy.substr(start, maxLen);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << longestPalindrome("aba");
    return 0;
}
