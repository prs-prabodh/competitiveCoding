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

    int n, cnt = 0, f[101], occ = -1;
    cin >> n;
    int a[n];
    bool flag = false;
    memset(f, 0, sizeof(int) * 101);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        if (f[a[i]] == 1)
            cnt++;
        if (f[a[i]] == 2)
            cnt--;
        if (f[a[i]] >= 3 && !flag)
        {
            flag = true;
            occ = a[i];
        }
    }
    // cout << cnt << endl;
    if (cnt % 2 == 0)
    {
        cout << "YES" << endl;
        if (n == 2 && a[0] == a[1])
        {
            cout << "AB" << endl;
            return 0;
        }
        int turn = 0;
        for (int i = 0; i < n; i++)
        {
            if (f[a[i]] == 1)
            {
                turn % 2 ? cout << "A" : cout << "B";
                turn++;
            }
            else
            {
                cout << "A";
            }
        }
    }
    else if (flag)
    {
        cout << "YES" << endl;
        int turn = 0;
        for (int i = 0; i < n; i++)
        {
            if (f[a[i]] == 1)
            {
                turn % 2 ? cout << "A" : cout << "B";
                turn++;
            }
            else if (f[a[i]] >= 3 && a[i] == occ)
            {
                if (flag)
                {
                    cout << "A";
                    flag = false;
                }
                else
                {
                    cout << "B";
                }
            }
            else
            {
                cout << "A";
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}