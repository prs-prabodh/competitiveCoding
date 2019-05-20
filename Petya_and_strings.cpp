/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string toLower(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] < 'a')
        {
            x[i] += 32;
        }
    }
    return x;
}

int main()
{
    string x, y;
    cin >> x >> y;
    x = toLower(x);
    y = toLower(y);
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] < y[i])
        {
            cout << -1 << endl;
            return 0;
        }
        if (x[i] > y[i])
        {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}