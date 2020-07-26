/*
*	@author Prabodh Ranjan Swain
*	Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int M = 1e9 + 7;
using namespace std;

string s;
int **freq;

int calc(int l, int r, int chr)
{
    if (l == r)
    {
        return (s[l] - 'a') != chr;
    }
    int mid = (r - l + 1) / 2;
    int left = freq[l + mid - 1][chr] - (l > 0 ? freq[l - 1][chr] : 0);
    int rght = freq[r][chr] - (l + mid > 0 ? freq[l + mid - 1][chr] : 0);
    return min(
        mid - left + calc(l + mid, r, chr + 1),
        mid - rght + calc(l, l + mid - 1, chr + 1));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cin >> s;
        freq = new int *[n];
        for (int i = 0; i < n; i++)
        {
            freq[i] = new int[26];
            memset(freq[i], 0, 26 * sizeof(int));
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                freq[i][j] = i > 0 ? freq[i - 1][j] : 0;
                if ((s[i] - 'a') == j)
                {
                    freq[i][j]++;
                }
            }
        }
        cout << calc(0, n - 1, 0) << endl;
    }
    return 0;
}