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

    string x;
    cin >> x;
    int len = x.length();
    bool flag = false;
    for (int i = 0; i < len; i++)
    {
        int digit = x[i] - '0';
        int flipped = 9 - digit;
        if (flipped < digit)
        {
            if(flipped != 0 || flag){
                x[i] = '0' + flipped;
            }
        }
        if(x[i]>0) flag = true;
    }
    cout << x << endl;
    return 0;
}