/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int classic(string x)
{
    int i = 0;
    while (isalpha(x[i]))
        i++;
    for (i; i < x.length(); i++)
    {
        if (x[i] == 'C')
            return i;
    }
    return -1;
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
        string x;
        cin >> x;
        int index = classic(x);
        if (index < 0)
        {
            int a = 0;
            int rows = 0, cols = 0, len = x.length();
            while (isalpha(x[a]))
            {
                cols *= 26;
                cols += (x[a] - 'A' + 1);
                a++;
            }
            char arr[len + 1];
            strcpy(arr, x.substr(a).c_str());
            rows = atoi(arr);
            cout << 'R' << rows << 'C' << cols << endl;
        }
        else
        {
            char *arr;
            arr = new char[index];
            strcpy(arr, x.substr(1, index - 1).c_str());
            int rows = atoi(arr), len = x.length();
            arr = new char[len - index];
            strcpy(arr, x.substr(index + 1).c_str());
            int cols = atoi(arr);
            string ans = "";
            while (cols > 0)
            {
                int rem = ((cols - 1) % 26);
                ans = (char)('A' + rem) + ans;
                cols -= rem + 1;
                cols /= 26;
            }
            cout << ans << rows << endl;
        }
    }
    return 0;
}