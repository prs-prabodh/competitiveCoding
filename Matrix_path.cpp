/*
    *  @author Prabodh Ranjan Swain
    *  Institute - ASET, New Delhi
    */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int **a, n;
vector<vector<bool>> vis;

bool dfsRow(int i, int j)
{
    // cout << i << ' ' << j << endl;
    if (i == n - 1)
    {
        return true;
    }
    vis[i][j] = true;

    if (i - 1 >= 0 && a[i - 1][j] == 1 && !vis[i - 1][j])
    {
        return dfsRow(i - 1, j);
    }
    if (i - 1 >= 0 && j + 1 < n && a[i - 1][j + 1] == 1 && !vis[i - 1][j + 1])
    {
        return dfsRow(i - 1, j + 1);
    }
    if (j + 1 < n && a[i][j + 1] == 1 && !vis[i][j + 1])
    {
        return dfsRow(i, j + 1);
    }
    if (i + 1 < n && j + 1 < n && a[i + 1][j + 1] == 1 && !vis[i + 1][j + 1])
    {
        return dfsRow(i + 1, j + 1);
    }
    if (i + 1 < n && a[i + 1][j] == 1 && !vis[i + 1][j])
    {
        return dfsRow(i + 1, j);
    }
    if (i + 1 < n && j - 1 >= 0 && a[i + 1][j - 1] == 1 && !vis[i + 1][j - 1])
    {
        return dfsRow(i + 1, j - 1);
    }
    if (j - 1 >= 0 && a[i][j - 1] == 1 && !vis[i][j - 1])
    {
        return dfsRow(i, j - 1);
    }
    if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == 1 && !vis[i - 1][j - 1])
    {
        return dfsRow(i - 1, j - 1);
    }
}

bool dfsCol(int i, int j)
{
    // cout << i << ' ' << j << endl;
    if (j == n - 1)
    {
        return true;
    }
    vis[i][j] = true;

    if (i - 1 >= 0 && a[i - 1][j] == 2 && !vis[i - 1][j])
    {
        return dfsRow(i - 1, j);
    }

    if (i - 1 >= 0 && j + 1 < n && a[i - 1][j + 1] == 2 && !vis[i - 1][j + 1])
    {
        return dfsRow(i - 1, j + 1);
    }
    // cout << a[i][j + 1] << ' ' << vis[i][j + 1] << endl;
    if (j + 1 < n && a[i][j + 1] == 2 && !vis[i][j + 1])
    {
        return dfsRow(i, j + 1);
    }
    if (i + 1 < n && j + 1 < n && a[i + 1][j + 1] == 2 && !vis[i + 1][j + 1])
    {
        return dfsRow(i + 1, j + 1);
    }
    if (i + 1 < n && a[i + 1][j] == 2 && !vis[i + 1][j])
    {
        return dfsRow(i + 1, j);
    }
    if (i + 1 < n && j - 1 >= 0 && a[i + 1][j - 1] == 2 && !vis[i + 1][j - 1])
    {
        return dfsRow(i + 1, j - 1);
    }
    if (j - 1 >= 0 && a[i][j - 1] == 2 && !vis[i][j - 1])
    {
        return dfsRow(i, j - 1);
    }
    if (i - 1 >= 0 && j - 1 >= 0 && a[i - 1][j - 1] == 2 && !vis[i - 1][j - 1])
    {
        return dfsRow(i - 1, j - 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    vis.resize(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    bool rule1 = false, rule2 = false, rule3 = false;
    for (int i = 0; i < n && !rule1; i++)
    {
        if (a[0][i] == 1)
        {
            vis.resize(n, vector<bool>(n, false));
            rule1 |= dfsRow(0, i);
        }
    }
    // cout << endl;
    for (int i = 0; i < n && !rule2; i++)
    {
        if (a[i][0] == 2)
        {
            vis.resize(n, vector<bool>(n, false));
            rule2 |= dfsCol(i, 0);
        }
    }
    if (rule1 && rule2)
    {
        cout << "AMBIGUOUS" << endl;
        return 0;
    }
    else if (rule1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (rule2)
    {
        cout << 2 << endl;
        return 0;
    }
    else
    {
        cout << 0 << endl;
        return 0;
    }
    return 0;
}