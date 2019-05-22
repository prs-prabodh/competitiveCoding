/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool valid(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, s;
    cin >> n >> s;
    int scopy = s;
    string minAns = "";
    bool go = n == 1 && s == 0 ? true : false;
    for (int i = 0; i < n; i++)
    {
        for (int j = go ? 0 : 1; j <= 9; j++)
        {
            if (valid(n - i - 1, scopy - j))
            {
                minAns += string(1, '0' + j);
                scopy -= j;
                if (j > 0)
                    go = true;
                break;
            }
        }
    }
    if (minAns == "")
    {
        cout << -1 << ' ' << -1 << endl;
        return 0;
    }
    string maxAns = "";
    scopy = s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 9; j >= 0; j--)
        {
            if (valid(n - i - 1, scopy - j))
            {
                maxAns += string(1, '0' + j);
                scopy -= j;
                break;
            }
        }
    }
    cout << minAns << ' ' << maxAns << endl;
    return 0;
}