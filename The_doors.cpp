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
    int a[n], left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] ? right++ : left++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] ? right-- : left--;
        if (!left || !right)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}