/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

vector<int> wave(vector<int> a)
{
    sort(a.begin(), a.end());
    int n = a.size();
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(a[i], a[i + 1]);
    }
    return a;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> ans = wave(a);
    for (auto i : ans)
        cout << i << ' ';
    return 0;
}