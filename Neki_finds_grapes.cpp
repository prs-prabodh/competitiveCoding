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
    int n, m;
    cin >> n >> m;
    int oddchests = 0, evenchests = 0, evenkeys = 0, oddkeys = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x % 2 ? oddchests++ : evenchests++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x % 2 ? oddkeys++ : evenkeys++;
    }
    cout << min(oddchests, evenkeys) + min(evenchests, oddkeys) << endl;
    return 0;
}