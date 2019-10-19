/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<string> ips;
vector<string> restoreIpAddresses(string a)
{
    int n = a.length();
    for (int i = 1; i <= 3; i++)
    {
        string f = a.substr(0, i);
        if ((stoi(f) > 0 && stoi(f) <= 255 && f[0] != '0') || (stoi(f) == 0 && f.length() == 1))
        {
            for (int j = 1; j <= 3; j++)
            {
                string s = a.substr(i, j);
                if ((stoi(s) > 0 && stoi(s) <= 255 && s[0] != '0') || (stoi(s) == 0 && s.length() == 1))
                {
                    for (int k = 1; k <= 3 && i + j + k <= n; k++)
                    {
                        string t = a.substr(i + j, k);
                        if ((stoi(t) > 0 && stoi(t) <= 255 && t[0] != '0') || (stoi(t) == 0 && t.length() == 1))
                        {
                            string f4 = a.substr(i + j + k);
                            if (f4.length() > 0 && f4.length() <= 3 && ((stoi(f4) > 0 && stoi(f4) <= 255 && f4[0] != '0') || (stoi(f4) == 0 && f4.length() == 1)))
                            {
                                ips.push_back(f + "." + s + "." + t + "." + f4);
                            }
                        }
                    }
                }
            }
        }
    }
    return ips;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // cout << stoi("01") << endl;
    vector<string> ans = restoreIpAddresses("00000");
    for (auto i : ips)
        cout
            << i << endl;
    return 0;
}