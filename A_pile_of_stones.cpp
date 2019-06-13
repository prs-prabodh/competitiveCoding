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
    int n, minAns = 0, cnt = 0;
    cin >> n;
    string x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cnt += x[i] == '+' ? 1 : -1;
        minAns = min(minAns, cnt);
    }
    cout << cnt + (-minAns) << endl;
    return 0;
}