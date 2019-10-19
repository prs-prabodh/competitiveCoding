/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9 + 7;

string minWindow(string A, string B)
{
    string ans = "";
    map<char, int> f, curr;
    int minL = INT_MAX, n = A.length(), m = B.length();
    for (int i = 0; i < B.length(); i++)
        f[B[i]]++;
    // for (auto i : f)
    // {
    //     cout << i.first << ' ' << f[i.first] << endl;
    // }
    int i = 0, j = -1, satisfied = 0, cnt = 0;
    while (j < n - 1 || (satisfied && i < n - 1))
    {
        // cout << i << " " << j << " " << ans << " " << cnt << endl;
        if (satisfied && i < j)
        {
            bool flag = false;
            curr[A[i]]--;
            i++;
            if (f[A[j]] > 0 && curr[A[i - 1]] < f[A[i - 1]])
            {
                cnt--;
                if (cnt < m)
                    satisfied = 0;
            }
            // for (auto x : f)
            // {
            //     // cout << x.first << " " << f[x.first] << ' ' << curr[x.first] << endl;
            //     if (f[x.first] > curr[x.first])
            //     {
            //         satisfied = 0;
            //         // flag=true;
            //         break;
            //     }
            //     else if (f[x.first] > 0 && curr[x.first] > 0)
            //     {
            //         satisfied = 1;
            //     }
            // }
            if (satisfied && j - i + 1 < minL)
            {
                minL = j - i + 1;
                ans = A.substr(i, minL);
            }
            // if(!flag){
            //     satisfied=1;
            //     if(j-i+1<minL){
            //         minL=j-i+1;
            //         ans=A.substr(i, minL);
            //     }
            // }
        }
        else if (j < n - 1)
        {
            bool flag = false;
            j++;
            curr[A[j]]++;
            if (f[A[j]] > 0 && curr[A[j]] <= f[A[j]])
            {
                cnt++;
                if (cnt >= m)
                    satisfied = 1;
            }
            // for (auto x : f)
            // {
            //     // cout << "second " << x.first << " " << f[x.first] << ' ' << curr[x.first] << endl;
            //     if (f[x.first] > curr[x.first])
            //     {
            //         satisfied = 0;
            //         // flag=true;
            //         break;
            //     }
            //     else if (f[x.first] > 0 && curr[x.first] > 0)
            //     {
            //         satisfied = 1;
            //     }
            // }
            if (satisfied && j - i + 1 < minL)
            {
                minL = j - i + 1;
                ans = A.substr(i, minL);
            }
            // if(!flag){
            //     satisfied=1;
            //     if(j-i+1<minL){
            //         minL=j-i+1;
            //         ans=A.substr(i, minL);
            //     }
            // }
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string a = "A";
    string b = "A";
    cout << minWindow(a, b) << endl;
    return 0;
}