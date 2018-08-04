/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        vector<vector<int>> dp(n,vector<int>(2,0));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++){
            dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(arr[i]-1));
            dp[i+1][1]=max(dp[i][0]+abs(arr[i+1]-1),dp[i][1]+abs(arr[i]-arr[i+1]));
        }
        cout<<max(dp[n-1][0],dp[n-1][1])<<endl;
    }
    return 0;
}
