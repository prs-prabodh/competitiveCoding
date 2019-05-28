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

    int n, x0, y0;
    cin >> n >> x0 >> y0;
    set<ld> s;
    for (int i = 0; i < n; i++)
    {
        ld x, y;
        cin >> x >> y;
        if(y==y0){
            s.insert(INFINITY);
            continue;
        }
        ld slope = (x - x0) / (ld)(y - y0);
        s.insert(slope);
    }
    cout << s.size() << endl;
    return 0;
}