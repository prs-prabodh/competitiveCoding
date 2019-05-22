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
    unordered_map<char, char> m;
    string x, y, t;
    cin >> x >> y >> t;
    for (int i = 0; i < 26; i++)
    {
        m[x[i]] = y[i];
        m[x[i] + 'A' - 'a'] = y[i] + 'A' - 'a';
    }
    for (int i = 0; i < t.length(); i++)
    {
        if (isalpha(t[i]))
            cout << m[t[i]];
        else
            cout << t[i];
    }
    cout << endl;
    return 0;
}