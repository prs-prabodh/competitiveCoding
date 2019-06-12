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
    ll ans = 0LL;
    int prev1, prev2;
    cin >> prev1;
    for (int i = 0; i < n - 1; i++)
    {
        int curr;
        cin >> curr;
        if (prev1 == 1 && curr == 2)
        {
            ans += 3;
            if (prev2 == 3)
                ans--;
        }
        if (prev1 == 1 && curr == 3)
            ans += 4LL;
        if (prev1 == 2 && curr == 1)
            ans += 3LL;
        if ((prev1 == 2 && curr == 3) || (prev1 == 3 && curr == 2))
        {
            ans = LLONG_MAX;
            break;
        }
        if (prev1 == 3 && curr == 1)
            ans += 4LL;
        prev2 = prev1;
        prev1 = curr;
    }
    ans == LLONG_MAX ? cout << "Infinite" << endl : cout << "Finite" << endl
                                                         << ans << endl;
    return 0;
}