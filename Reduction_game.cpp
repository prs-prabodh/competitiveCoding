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
        int n, k;
        cin >> n >> k;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > k)
            {
                int diff = a[i] - k;
                a[i + 1] -= diff;
                a[i] = k;
                sum -= 2 * diff;
            }
        }
        cout << sum << endl;
    }
    return 0;
}