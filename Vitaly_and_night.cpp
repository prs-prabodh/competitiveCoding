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
    int n, m;
    cin >> n >> m;
    int ppl = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ppl += x | y ? 1 : 0;
        }
    }
    cout << ppl << endl;
    return 0;
}