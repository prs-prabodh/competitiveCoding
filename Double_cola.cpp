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
    vector<string> x = {"Sheldon",
                        "Leonard",
                        "Penny", "Rajesh", "Howard"};
    int sub1 = 0;
    while (n > (5 * (1 << sub1)))
    {
        n -= (5 * (1 << sub1));
        sub1++;
    }
    int sub2 = sub1;
    sub1--;
    int i = 0;
    while (i < 5)
    {
        if (n <= (1 << sub2))
        {
            break;
        }
        n -= (1 << sub2);
        i++;
    }
    cout << x[i] << endl;
    return 0;
}