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
    unordered_map<int, int> home_kits_freq;
    vector<int> away_kits;
    for (int i = 0; i < n; i++)
    {
        int h, a;
        cin >> h >> a;
        home_kits_freq[h]++;
        away_kits.push_back(a);
    }
    for (int i = 0; i < away_kits.size(); i++)
    {
        int homeKits = (n - 1) + home_kits_freq[away_kits[i]];
        int awayKits = (n - 1) - home_kits_freq[away_kits[i]];
        cout << homeKits << ' ' << awayKits << endl;
    }
    return 0;
}