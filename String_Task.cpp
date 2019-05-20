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
    string s;
    cin >> s;
    int len = s.length();
    s = toLower(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << s[i];
        }
    }
    cout << endl;
    return 0;
}