/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

long countTriplets(vector<long> a, long r)
{
    unordered_map<long, int> left, right;
    ll n = a.size(), cnt = 0LL;
    for (int i = 0; i < n; i++)
    {
        right[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        long p1 = 0L, p2 = 0L;
        if (a[i] % r == 0)
        {
            p1 = left[a[i] / r];
        }
        left[a[i]]++;
        p2 = right[a[i] * r] - left[a[i] * r];
        cnt += p1 * p2;
    }
    return cnt;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<long> a = {15, 15, 15, 15};
    long r = 1;
    cout << countTriplets(a, r) << endl;
    return 0;
}