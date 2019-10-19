/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

void kmp(string x, string y, int lps[])
{
    int i = 1, len = 0, n = x.length();
    lps[0] = 0;
    while (i < n)
    {
        if (x[len] == y[i])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len > 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test;
    cin >> test;
    while (test--)
    {
        string x, y;
        cin >> x >> y;
        int n = x.length(), lps[n] = {0};
        if (n != y.length())
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            kmp(x, y, lps);
            int prefix = lps[n - 1];
            if (x.substr(prefix) == y.substr(0, n - prefix))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}