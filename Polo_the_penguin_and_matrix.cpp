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

    int n, m, d;
    cin >> n >> m >> d;
    int k = n * m;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    sort(a, a + (m * n));
    int median = *(a + k / 2), cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (abs(a[i] - median) % d == 0)
        {
            cnt += abs(a[i] - median) / d;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    return 0;
}