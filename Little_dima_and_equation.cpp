/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

ll sum(ll x)
{
    ll sum = 0LL;
    while (x > 0LL)
    {
        sum += (x % 10LL);
        x /= 10LL;
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> ans;
    for (ll i = 1LL; i < 82LL; i++)
    {
        ll candidate = b * (ll)powl(i, a) + c;
        if (sum(candidate) == i && candidate > 0 && candidate < 1e9)
        {
            ans.push_back(candidate);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}