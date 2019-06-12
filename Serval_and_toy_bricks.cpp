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

    int n, m, h;
    cin >> n >> m >> h;
    int front[m], left[n], mat[n][m], ans[n][m];
    for (int i = 0; i < m; i++)
        cin >> front[i];
    for (int i = 0; i < n; i++)
        cin >> left[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] * min(front[j], left[i]) << ' ';
        }
        cout << endl;
    }
    return 0;
}