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

    int m, n;
    cin >> m >> n;
    bool visited[20001];
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push({0, m});
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        int lvl = x.first;
        int num = x.second;
        if (num == n)
        {
            cout << lvl << endl;
            break;
        }
        int newn = num * 2;
        if (newn<20000 && !visited[newn])
        {
            visited[newn] = true;
            q.push({lvl + 1, newn});
        }
        newn = num - 1;
        if (newn>=0 && !visited[newn])
        {
            visited[newn] = true;
            q.push({lvl + 1, newn});
        }
    }
    return 0;
}