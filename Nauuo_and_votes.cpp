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
    int x, y, z;
    cin >> x >> y >> z;
    if (z == 0)
    {
        x > y ? cout << "+" << endl : x == y ? cout << "0" << endl : cout << "-" << endl;
        return 0;
    }
    else
    {
        if (x <= y)
        {
            if (x + z >= y)
            {
                cout << "?" << endl;
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else
        {
            if (x <= y + z)
            {
                cout << "?" << endl;
            }
            else
            {
                cout << "+" << endl;
            }
        }
    }
    return 0;
}