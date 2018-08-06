/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
using namespace std;
class Solution
{
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            if(n==0) return 0;
            int dp[n]={0};
            int minTerm=prices[0];
            for(int i=1;i<n;i++){
                dp[i]=max(dp[i-1],prices[i]-minTerm);
                minTerm=min(minTerm,prices[i]);
            }
            return dp[n-1];
    }
};

// Driver Code

// int main()
// {
//     Solution s;
//     vector<int> prices={7,1,5,3,6,4};
//     cout<<s.maxProfit(prices)<<endl;
// }
