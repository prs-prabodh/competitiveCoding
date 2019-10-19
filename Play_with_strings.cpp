/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

void compute(int lps[], string pat)
{
    int len = 0, i = 1, patl = pat.length();
    lps[0] = 0;
    while (i < patl)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[len] = 0;
                i++;
            }
        }
    }
}

string replace(string txt, string pat)
{
    // cout << "Enter" << endl;
    string ans = "NOT FOUND";
    vector<int> loc;
    int patl = pat.length(), txtl = txt.length(), lps[patl], i = 0, j = 0;
    compute(lps, pat);
    while (i < txtl)
    {
        if (txt[i] == pat[j])
        {
            j++;
            i++;
            if (j == patl)
            {
                // if (loc.size() == 0 || loc[loc.size() - 1] != i - (2 * patl))
                loc.push_back(i - patl);
                j = 0;
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
        // cout << i << endl;
    }
    // cout << txtl << endl;
    // for (auto i : loc)
    //     cout << i << ' ';
    // cout << endl;
    if (loc.size() == 0)
        return ans;
    int p = 0;
    ans = "";
    // cout << txtl << endl;
    // for (int i = 0; i < txtl; i++)
    // {
    //     cout << p << " " << i << " " << loc[p] << endl;
    //     // cout << i << endl;
    // }

    char prev = '$';
    for (int x = 0; x < txtl; x++)
    {
        // cout << p << " " << x << " " << loc[p] << " " << ans << endl;
        if (loc[p] == x)
        {
            if (prev != 'Y')
            {
                ans += "Y";
                prev = 'Y';
            }
            x += patl - 1;
            p++;
        }
        else
        {
            ans += string(1, txt[x]);
            prev = txt[x];
        }
    }
    cout << ans << endl;
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string x, y;
    cin >> x >> y;
    string ans = replace(x, y);
    cout << ans << endl;
    return 0;
}