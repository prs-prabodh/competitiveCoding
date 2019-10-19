/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

// int ans = 0;

int merge(vector<int> &a, vector<int> &temp, int beg, int mid, int end)
{
    // cout << "logging ";
    // for (int i = beg; i <= end; i++)
    // {
    //     cout << a[i] << ' ';
    // }
    // cout << mid << endl;

    int i = beg, j = mid + 1, k = beg, ans = 0;
    while (i <= mid && j <= end)
    {
        // cout << "Exec" << endl;
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            // cout << i << ' ' << j << ' ' << a[i] << ' ' << a[j] << ' ' << mid - i + 1 << endl;
            temp[k++] = a[j++];
            ans += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= end)
    {
        temp[k++] = a[j++];
    }
    for (int i = beg; i <= end; i++)
    {
        a[i] = temp[i];
    }
    // cout << "Ans= " << ans << endl;
    return ans;
}

int mergeSort(vector<int> &a, vector<int> &temp, int beg, int end)
{
    int mid = 0, ans = 0;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        ans += mergeSort(a, temp, beg, mid);
        ans += mergeSort(a, temp, mid + 1, end);
        ans += merge(a, temp, beg, mid, end);
    }
    return ans;
}

int insertionSort(vector<int> a)
{
    // ans = 0;
    int n = a.size();
    vector<int> temp(n);
    return mergeSort(a, temp, 0, n - 1);
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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << insertionSort(a) << endl;
    }
    return 0;
}