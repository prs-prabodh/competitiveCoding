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
    string a, b;
    cin >> a >> b;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (i < n - 1 && b[i] == a[i + 1] && a[i + 1] != b[i + 1])
            {
                char t;
                t = a[i + 1], a[i + 1] = a[i], a[i] = t;
            }
            else
            {
                a[i] == '0' ? '1' : '0';
            }
            cost++;
        }
    }
    cout << cost << endl;
    return 0;
}