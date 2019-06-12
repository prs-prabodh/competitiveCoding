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
    multiset<int> s;
    unordered_map<int, int> m;
    m[4] = 1;
    m[8] = 2;
    m[15] = 3;
    m[16] = 4;
    m[23] = 5;
    m[42] = 6;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int findEle = m[x];
        if (findEle == 1)
        {
            s.insert(findEle);
        }
        else
        {
            auto found = s.find(findEle - 1);
            if (found != s.end())
            {
                int t = *found;
                s.erase(found);
                s.insert(t + 1);
            }
            else
            {
                cnt++;
            }
        }
    }
    for (auto i : s)
    {
        if (i < 6)
        {
            cnt += i;
        }
    }
    cout << cnt << endl;
    return 0;
}