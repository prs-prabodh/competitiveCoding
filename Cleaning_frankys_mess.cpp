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
        int n;
        cin >> n;
        vector<int> type(n, 0), cont(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                type[j] += x;
                cont[i] += x;
            }
        }
        sort(type.begin(), type.end());
        sort(cont.begin(), cont.end());
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (type[i] != cont[i])
            {
                possible = false;
            }
        }
        possible ? cout << "Possible" << endl : cout << "Impossible" << endl;
    }
    return 0;
}