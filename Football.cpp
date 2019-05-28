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
    int len = x.length();
    int zero = 0, ones = 0;
    for (int i = 0; i < len; i++)
    {
        if (x[i] == '1')
        {
            zero = 0;
            ones++;
            if (ones > 6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            ones = 0;
            zero++;
            if (zero > 6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}