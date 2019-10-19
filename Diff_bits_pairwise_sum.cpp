/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int cntBits(vector<int> &a)
{
    const int PREC = 32;
    int n = a.size();
    long long int zero[32] = {0LL}, ones[32] = {0LL};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < PREC; j++)
        {
            a[i] % 2 ? ones[j]++ : zero[j]++;
            a[i] /= 2;
        }
    }
    long long int ans = 0LL;
    for (int j = 0; j < PREC; j++)
    {
        // cout << zero[j] << ' ' << ones[j] << endl;
        ans = (ans + (zero[j] * ones[j]) % M) % M;
    }
    return (2 * ans) % M;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {1, 3, 5};
    cout << cntBits(a) << endl;
    return 0;
}