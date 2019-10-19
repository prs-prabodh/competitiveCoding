/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

void rotate(vector<vector<int>> &a, int i, int j, int ir, int jr, int r)
{
    int icopy = i, jcopy = j;
    vector<int> layer;
    layer.push_back(a[i][j]);
    for (int x = 1; x < jr; x++)
    {
        j++;
        layer.push_back(a[i][j]);
    }
    for (int x = 1; x < ir; x++)
    {
        i++;
        layer.push_back(a[i][j]);
    }
    for (int x = 1; x < jr; x++)
    {
        j--;
        layer.push_back(a[i][j]);
    }
    for (int x = 1; x < ir - 1; x++)
    {
        i--;
        layer.push_back(a[i][j]);
    }
    // for (auto i : layer)
    //     cout << i << " ";
    // cout << endl;
    int layerSize = layer.size(), k = 0;
    i = icopy, j = jcopy;
    for (int x = 0; x < jr; x++)
    {
        a[i][j++] = layer[(k + r) % layerSize];
        k++;
    }
    j--;
    for (int x = 1; x < ir; x++)
    {
        a[++i][j] = layer[(k + r) % layerSize];
        k++;
    }
    for (int x = 1; x < jr; x++)
    {
        a[i][--j] = layer[(k + r) % layerSize];
        k++;
    }
    for (int x = 1; x < ir - 1; x++)
    {
        a[--i][j] = layer[(k + r) % layerSize];
        k++;
    }
}

void matrixRotation(vector<vector<int>> a, int r)
{
    int n = a.size(), m = a[0].size(), depth = (min(m, n) + 1) / 2, i = 0, j = 0;
    while (depth--)
    {
        rotate(a, i, j, n, m, r);
        // for (auto i : a)
        // {
        //     for (auto j : i)
        //     {
        //         cout << j << ' ';
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        i++;
        j++;
        n -= 2;
        m -= 2;
    }
    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m, r;
    cin >> n >> m >> r;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    matrixRotation(a, r);
    return 0;
}