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

    string x, y;
    cin >> x >> y;
    int correct = 0, xlen = x.length(), ylen = y.length();
    for (int i = 0; i < xlen; i++)
    {
        correct += x[i] == '+' ? 1 : -1;
    }
    int curr = 0, unsure = 0;
    for (int i = 0; i < ylen; i++)
    {
        if (y[i] != '?')
        {
            curr += y[i] == '+' ? 1 : -1;
        }
        else
            unsure++;
    }
    vector<int> s;
    for (int i = 0; i < pow(2, unsure); i++)
    {
        int j = 0, tempAns = 0;
        while (j < unsure)
        {
            tempAns += (i & (1 << j)) ? 1 : -1;
            j++;
        }
        s.push_back(tempAns);
    }
    int target = correct - curr;
    ld hits = 0;
    for (auto i : s)
    {
        if (i == target)
        {
            hits++;
        }
    }
    ld ans = (ld)hits / (ld)(s.size());
    cout << fixed;
    cout << setprecision(9) << ans << endl;
    return 0;
}