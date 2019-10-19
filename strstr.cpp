/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

void preprocess(string b, int lps[], int n)
{
    int len = 0, i = 1;
    while (i < n)
    {
        if (b[i] == b[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

int findThis(const string a, const string b)
{
    int blen = b.length(), alen = a.length(), lps[blen];
    memset(lps, 0, sizeof(int) * blen);
    preprocess(b, lps, blen);
    int i = 0, len = 0;
    while (i < alen)
    {
        if (a[i] == b[len])
        {
            i++;
            len++;
            if (len == blen)
            {
                return i - len;
            }
        }
        else
        {
            if (len == 0)
            {
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << findThis("abxabcab", "akphaxabc") << endl;
    return 0;
}