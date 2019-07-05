/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int n, m;
char **a;

bool empty()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '.')
            {
                return false;
            }
        }
    }
    return true;
}

void traverse(int x, int y, int dx, int dy)
{
    while (x + dx >= 0 && x + dx < n && y + dy >= 0 && y + dy < m && a[x + dx][y + dy] == '*')
    {
        x += dx;
        y += dy;
        a[x][y] = '.';
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> m;
    a = new char *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new char[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (a[i][j] == '*' && a[i - 1][j] == '*' && a[i + 1][j] == '*' && a[i][j - 1] == '*' && a[i][j + 1] == '*')
            {
                a[i][j] = '.';
                traverse(i, j, -1, 0);
                traverse(i, j, 1, 0);
                traverse(i, j, 0, -1);
                traverse(i, j, 0, 1);
                empty() ? cout << "YES" << endl : cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}