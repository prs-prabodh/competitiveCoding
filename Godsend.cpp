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
    bool first = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        first |= (x % 2);
    }
    first ? cout << "First" << endl : cout << "Second" << endl;
    return 0;
}