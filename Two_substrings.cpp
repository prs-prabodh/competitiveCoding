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
    map<string, int> m;
    m["BA"] = INT_MAX;
    m["AB"] = INT_MAX;
    for (int i = 0; i < len - 1; i++)
    {
        if (x.substr(i, 2) == "AB")
        {
            m["AB"] = min(m["AB"], i);
            if (m["BA"] != INT_MAX && i - m["BA"] >= 2)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        if (x.substr(i, 2) == "BA")
        {
            m["BA"] = min(m["BA"], i);
            if (m["AB"] != INT_MAX && i - m["AB"] >= 2)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}