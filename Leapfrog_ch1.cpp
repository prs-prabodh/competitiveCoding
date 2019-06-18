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

    int test = 0, t = 0;
    cin >> test;
    while (t < test)
    {
        string x;
        cin >> x;
        int frogs = 0, len = x.length();
        for (int i = 1; i < len; i++)
        {
            frogs += x[i] == 'B' ? 1 : 0;
        }
        int blanks = len - 1 - frogs;
        cout << "Case #" << t + 1 << ": ";
        (blanks <= (len - 1) / 2 && blanks > 0) ? cout << "Y" << endl : cout << "N" << endl;
        t++;
    }
    return 0;
}