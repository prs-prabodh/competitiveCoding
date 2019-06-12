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

    int n, m;
    cin >> n >> m;
    vector<set<int>> bank;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        set<int> local;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[i][j] = x;
            local.insert(x);
        }
        bank.push_back(local);
    }
    int val = 0;
    for (int i = 0; i < n; i++)
        val ^= a[i][0];
    if (val == 0)
    {
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (bank[i].size() > 1)
            {
                index = i;
                break;
            }
        }
        if (index >= 0)
        {
            cout << "TAK" << endl;
            for (int i = 0; i < n; i++)
            {
                if (i == index)
                {
                    int first = a[i][0];
                    for (int j = 0; j < m; j++)
                    {
                        if (a[i][j] != first)
                        {
                            cout << j + 1 << ' ';
                            break;
                        }
                    }
                }
                else
                    cout << 1 << ' ';
            }
        }       
        else
        {
            cout << "NIE" << endl;
        }
    }
    else
    {
        cout << "TAK" << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
    }
    return 0;
}