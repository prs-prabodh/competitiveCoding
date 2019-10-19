/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

bool check(vector<int> &a, long long int time, int painters)
{
    long long sum = 0LL, currPainters = 0LL;
    for (int i = 0; i < a.size(); i++)
    {
        if (sum + a[i] <= time)
        {
            sum += a[i];
        }
        else
        {
            sum = a[i];
            currPainters++;
        }
    }
    currPainters++;
    return currPainters <= painters;
}

int paint(int k, int t, vector<int> &a)
{
    long long l = 0LL, r = 0LL, ans = 0LL;
    for (int i = 0; i < a.size(); i++)
    {
        l = max(l, (long long)a[i]);
        r += a[i];
    }
    while (l <= r)
    {
        long long m = l + (r - l) / 2;
        if (check(a, m, k))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans * t;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k = 3, t = 10;
    vector<int> a = {640, 435, 647, 352, 8, 90, 960, 329, 859};
    cout << paint(k, t, a) << endl;
    return 0;
}