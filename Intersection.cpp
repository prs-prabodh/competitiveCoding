/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<int> findIntersection(vector<int> a, vector<int> b)
{
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> res;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 3, 3, 5, 8, 5};
    vector<int> b = {3, 3, 5, 9};
    vector<int> ans = findIntersection(a, b);
    for (auto i : ans)
        cout << i << ' ';
    cout << endl;
    return 0;
}