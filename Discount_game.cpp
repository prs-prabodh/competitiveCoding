/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string min(string a, string b)
{
    int i = 0, al = a.length(), bl = b.length();
    while (i < al && a[i] == '0')
        i++;
    a = a.substr(i);
    i = 0;
    while (i < bl && b[i] == '0')
        i++;
    b = b.substr(i);

    if (a == "" || b == "")
        return "0";

    if (al == bl)
    {
        for (int i = 0; i < al; i++)
        {
            if (a[i] != b[i])
            {
                return a[i] < b[i] ? a : b;
            }
        }
        return a;
    }
    else
    {
        return al > bl ? b : a;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 0;
    cin >> test;
    while (test--)
    {
        string n;
        cin >> n;
        string ans = n;
        int len = n.length();
        if (len == 1)
        {
            cout << n << endl;
            continue;
        }
        for (int i = 0; i < len; i++)
        {
            string left = "", right = "";
            if (i > 0)
            {
                left = n.substr(0, i);
            }
            if (i < len - 1)
            {
                right = n.substr(i + 1);
            }
            ans = min(ans, left + right);
        }
        cout << ans << endl;
        ;
    }
    return 0;
}