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

    int nx, bx;
    cin >> nx >> bx;
    int x[nx];
    for (int i = 0; i < nx; i++)
        cin >> x[i];
    int ny, by;
    cin >> ny >> by;
    int y[ny];
    for (int i = 0; i < ny; i++)
        cin >> y[i];
    ll xn = 0LL, yn = 0LL;
    for (int i = 0; i < nx; i++)
    {
        xn = xn * bx + (x[i]);
    }
    for (int i = 0; i < ny; i++)
    {
        yn = yn * by + (y[i]);
    }
    if (xn < yn)
    {
        cout << "<" << endl;
    }
    else if (xn > yn)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    return 0;
}