/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    string x;
    cin >> x;
    int cnt = 0;
    stack<char> stk;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '(')
        {
            cnt % 2 ? cout << 0 : cout << 1;
            cnt++;
            stk.push(x[i]);
        }
        else
        {
            cnt % 2 == 0 ? cout << 0 : cout << 1;
            cnt--;
            stk.pop();
        }
    }
    return 0;
}