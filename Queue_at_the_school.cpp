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

    int n, t;
    cin >> n >> t;
    string x;
    cin >> x;
    int p = 0;
    while (t--)
    {
        for (p = 0; p < n - 1; p++)
        {
            if (x[p] == 'B' && x[p + 1] == 'G')
            {
                x[p] = 'G';
                x[p + 1] = 'B';
                p++;
            }
        }
    }
    cout << x << endl;
    return 0;
}