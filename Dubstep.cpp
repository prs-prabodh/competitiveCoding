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
    string x;
    cin >> x;
    int n = x.length();
    string t = "";
    for (int i = 0; i < n; i++)
    {
        if (x.substr(i, 3) == "WUB")
        {
            i += 2;
            if (t != "")
            {
                cout << t << ' ';
                t = "";
            }
        }
        else
        {
            t += string(1, x[i]);
        }
    }
    if (t != "")
        cout << t << endl;
    return 0;
}