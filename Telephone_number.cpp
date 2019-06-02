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
        string x;
        cin >> n >> x;
        int p = 0;
        while (p < n - 1 && x[p] != '8')
            p++;
        n - p >= 11 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}