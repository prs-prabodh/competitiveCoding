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

    int test = 0;
    cin >> test;
    while (test--)
    {
        string x, y;
        cin >> x >> y;
        int xlen = x.length(), ylen = y.length();
        vector<pair<char, int>> actual, ref;
        char curr = x[0];
        int fr = 1;
        for (int i = 1; i < xlen; i++)
        {
            if (curr != x[i])
            {
                ref.push_back({curr, fr});
                curr = x[i];
                fr = 1;
            }
            else
            {
                fr++;
            }
        }
        ref.push_back({curr, fr});
        curr = y[0];
        fr = 1;
        for (int i = 1; i < ylen; i++)
        {
            if (curr != y[i])
            {
                actual.push_back({curr, fr});
                curr = y[i];
                fr = 1;
            }
            else
            {
                fr++;
            }
        }
        actual.push_back({curr, fr});
        int actualP = 0;
        bool flag = false;
        if (actual.size() != ref.size())
        {
            cout << "NO" << endl;
            flag = 1;
        }
        for (int i = 0; i < ref.size() && !flag; i++)
        {
            if (ref[i].first != actual[actualP].first || ref[i].second > actual[actualP].second)
            {
                cout << "NO" << endl;
                flag = true;
            }
            actualP++;
        }
        if (!flag)
            cout << "YES" << endl;
    }
    return 0;
}