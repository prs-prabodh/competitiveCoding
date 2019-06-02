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

    vector<int> a({4, 8, 15, 16, 23, 42});
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            m[a[i] * a[j]] = {a[i], a[j]};
        }
    }
    vector<int> ans(6);
    int x, y;
    cout << "? " << 1 << ' ' << 3 << endl;
    cin >> x;
    cout << "? " << 2 << ' ' << 3 << endl;
    cin >> y;
    for (auto i : m[x])
    {
        // cout<<m[y][0]<<' '<<m[y][1]<<' '<<i<<endl;
        if (i == m[y][0] || i == m[y][1])
        {
            ans[2] = i;
            ans[0] = x / i;
            ans[1] = y / i;
            break;
        }
    }
    cout << "? " << 4 << ' ' << 6 << endl;
    cin >> x;
    cout << "? " << 5 << ' ' << 6 << endl;
    cin >> y;
    for (auto i : m[x])
    {
        if (i == m[y][0] || i == m[y][1])
        {
            ans[5] = i;
            ans[3] = x / i;
            ans[4] = y / i;
            break;
        }
    }
    cout << "! ";
    for (auto i : ans)
        cout << i << ' ';
    cout << endl;
    return 0;
}