/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

const int N = 1e5;
int n;
int t[2 * N];

void build()
{
    for (int i = n - 1; i > 0; --i)
        t[i] = t[i << 1] ^ t[i << 1 | 1];
}

void modify(int p, int value)
{
    for (t[p += n] = value; p > 1; p >>= 1)
        t[p >> 1] = t[p] ^ t[p ^ 1];
}

int query(int l, int r)
{
    int res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l & 1)
            res ^= t[l++];
        if (r & 1)
            res ^= t[--r];
    }
    return res;
}

vector<int> solve(vector<int> &A, vector<vector<int>> &B)
{
    n = A.size();
    vector<int> ans;
    for (int i = 0; i < A.size(); i++)
    {
        t[i + n] = A[i];
    }
    build();
    for (auto i : B)
    {
        if (i[0] == 1)
        {
            modify(i[1], i[2]);
            ans.push_back(-1);
        }
        else
        {
            cout << i[1] << " " << i[2] << endl;
            ans.push_back(query(i[1], i[2]));
        }
        for (int j = 0; j < 2 * n; j++)
            cout << t[j] << ' ';
        cout << endl;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> A = {1, 2, 3};
    vector<vector<int>> B = {{1, 0, 1}, {2, 1, 2}};
    vector<int> ans = solve(A, B);
    for (auto i : ans)
        cout << i << ' ';
    return 0;
}