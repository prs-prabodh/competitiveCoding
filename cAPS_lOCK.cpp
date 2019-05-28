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
    bool upper = true;
    for (int i = len - 1; i > 0; i--)
    {
        if (islower(x[i]))
        {
            upper = false;
            break;
        }
    }
    if (upper)
    {
        for (int i = 0; i < len; i++)
        {
            if (isupper(x[i]))
                x[i] = tolower(x[i]);
            else
                x[i] = toupper(x[i]);
        }
    }
    cout << x << endl;
    return 0;
}