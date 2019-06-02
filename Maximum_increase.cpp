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
    int maxAns = INT_MIN, ans = 0, prev = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (prev < curr)
        {
            ans++;
        }
        else
        {
            maxAns = max(maxAns, ans);
            ans = 1;
        }
        prev = curr;
    }
    maxAns = max(maxAns, ans);
    cout << maxAns << endl;
    return 0;
}