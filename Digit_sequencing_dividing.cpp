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

    int test = 0;
    cin >> test;
    while (test--)
    {
        int n;
        string x;
        cin >> n >> x;
        string a = x.substr(0, 1);
        string b = x.substr(1);
        if (n == 2 && a[0] >= b[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl
                 << '2' << endl
                 << a << ' ' << b << endl;
        }
    }
    return 0;
}