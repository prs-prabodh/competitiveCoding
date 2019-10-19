/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string lateralTraversal(vector<string> s, int r)
{
    string ans = "";
    for (auto i : s)
    {
        // cout << i << endl;
        ans += i;
    }
    return ans;
}

string convert(string a, int r)
{
    vector<string> res(r, "");
    int n = a.length(), col = 0, i = 0;
    while (true)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < r - 1; row++)
            {
                res[row] += a[i++];
                if (i >= n)
                    return lateralTraversal(res, r);
            }
        }
        else
        {
            for (int row = r - 1; row > 0; row--)
            {
                res[row] += a[i++];
                if (i >= n)
                    return lateralTraversal(res, r);
            }
        }
        col++;
    }
    return "";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s = "ABCD";
    int r = 2;
    cout << convert(s, r) << endl;
    return 0;
}