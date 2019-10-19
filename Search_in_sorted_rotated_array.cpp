/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int search(vector<int> &a, int b)
{
    int l = 0, r = a.size();
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == b)
            return m;
        if (a[l] <= a[m])
        {
            if (a[l] <= b && a[m] >= b)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        else
        {
            if (a[m] <= b && a[r] >= b)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    int b = 7;
    cout << search(a, b) << endl;
    return 0;
}