/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int *h, k;

void heapify(int n)
{
    int l = 2 * n, r = 2 * n + 1;
    int smallest = n;
    if (l < k && h[l] < h[smallest])
    {
        smallest = l;
    }
    if (r < k && h[r] < h[smallest])
    {
        smallest = r;
    }
    if (smallest != n)
    {
        int t;
        t = h[smallest], h[smallest] = h[n], h[n] = t;
        heapify(smallest);
    }
    return;
}

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
        int n;
        cin >> k >> n;
        h = new int[k + 1];
        for (int i = 0; i <= k; i++)
            h[i] = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > h[0])
            {
                h[0] = x;
                heapify(0);
                // curr = h[0];
            }
            cout << h[0] << ' ';
        }
        cout << endl;
    }
    return 0;
}