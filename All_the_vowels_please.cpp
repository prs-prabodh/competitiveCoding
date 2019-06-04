/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

char rep[5][5] = {'a', 'e', 'i', 'o', 'u',
                  'e', 'i', 'o', 'u', 'a',
                  'i', 'o', 'u', 'a', 'e',
                  'o', 'u', 'a', 'e', 'i',
                  'u', 'a', 'e', 'i', 'o'};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin >> num;
    for (int i = 5; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            int n = i, m = num / i;
            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < m; y++)
                {
                    cout << rep[x % 5][y % 5];
                }
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}