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
    for (int i = 0; i < len; i++)
    {
        if ((x[i] - '8') % 8 == 0)
        {
            cout << "YES" << endl;
            cout << x[i] << endl;
            return 0;
        }
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len && x[i] != '0'; j++)
        {
            int cnd = (x[i] - '0') * 10 + (x[j] - '0');
            if (cnd % 8 == 0)
            {
                cout << "YES" << endl;
                cout << x[i] << x[j] << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len && x[i] != '0'; j++)
        {
            for (int k = j + 1; k < len; k++)
            {
                int cnd = (x[i] - '0') * 100 + (x[j] - '0') * 10 + (x[k] - '0');
                if (cnd % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << x[i] << x[j] << x[k] << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}