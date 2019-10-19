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

    int n;
    cin >> n;
    int mod = n % 4;
    unordered_map<int, int> m;
    unordered_map<int, int> m2;
    m[1] = 1;
    m[2] = 3;
    m[3] = 2;
    m[0] = 4;
    int res = INT_MAX, add = 0;
    for (int i = 0; i < 3; i++)
    {
        if (res > m[(n + i) % 4])
        {
            res = m[(n + i) % 4];
            add = i;
        }
    }
    cout << add << ' ' << (char)('A' + res - 1) << endl;
    return 0;
}