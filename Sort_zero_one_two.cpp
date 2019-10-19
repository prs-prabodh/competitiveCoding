/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

void swap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

void sortArr(vector<int> a)
{
    int n = a.size(), l = 0, i = 0, r = n - 1;
    while (i <= r)
    {
        if (a[i] == 0)
        {
            swap(a[l++], a[i++]);
        }
        else if (a[i] == 2)
        {
            swap(a[i], a[r--]);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {0, 1, 2, 2, 1, 0, 0, 1, 2};
    sortArr(a);
    for (auto i : a)
        cout << i << ' ';
    return 0;
}