/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int findMinDiff(vector<int> a, vector<int> b, vector<int> c)
{
    int al = a.size(), bl = b.size(), cl = c.size(), i = 0, j = 0, k = 0, minDiff = INT_MAX;
    while (i < al && j < bl && k < cl)
    {
        // cout << i << ' ' << j << " " << k << endl;
        if (i >= al || j >= bl || k >= cl)
            break;
        minDiff = min(minDiff, max(c[k], max(a[i], b[j])) - min(c[k], min(a[i], b[j])));
        if (a[i] <= b[j])
        {
            if (a[i] <= c[k])
            {
                if (i < al - 1)
                    i++;
                else if (b[j] <= c[k] && j < bl - 1)
                    j++;
                else
                    k++;
            }
            else
            {
                if (k < cl - 1)
                    k++;
                else if (i < al - 1)
                    i++;
                else
                    j++;
            }
        }
        else
        {
            if (b[j] <= c[k])
            {
                if (j < bl - 1)
                    j++;
                else if (a[i] <= c[k] && i < al - 1)
                    i++;
                else
                    k++;
            }
            else
            {
                if (k < cl - 1)
                    k++;
                else if (j < bl - 1)
                    j++;
                else
                    i++;
            }
        }
    }
    return minDiff;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 4, 5, 8, 10};
    vector<int> b = {6, 9, 15};
    vector<int> c = {2, 3, 6, 6};
    cout << findMinDiff(a, b, c) << endl;
    return 0;
}