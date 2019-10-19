/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int a);
};

vector<vector<int>> Solution::generateMatrix(int a)
{
    vector<vector<int>> ans(a, vector<int>(a));
    int icopy = 0, jcopy = 0, depth = (a + 1) / 2, value = 1, il = a, jl = a;
    while (depth--)
    {
        int i = icopy, j = jcopy;
        for (int x = 0; x < jl; x++)
        {
            ans[i][j++] = value++;
        }
        j--;
        for (int x = 1; x < il; x++)
        {
            ans[++i][j] = value++;
        }
        for (int x = 1; x < jl; x++)
        {
            ans[i][--j] = value++;
        }
        for (int x = 1; x < il - 1; x++)
        {
            ans[--i][j] = value++;
        }
        i++;
        j++;
        il -= 2;
        jl -= 2;
        icopy++;
        jcopy++;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    Solution sol;
    vector<vector<int>> a = sol.generateMatrix(n);
    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}