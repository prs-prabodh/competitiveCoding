/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

class Solution {
	public:
	int minCostClimbingStairs (vector<int> &cost) {
		int n=cost.size();
		int dp[n]={0};
		for(int i=n-1;i>=0;i--) {
			int c1=i+1<n?dp[i+1]:0;
			int c2=i+2<n?dp[i+2]:0;
			dp[i]=cost[i]+min(c1,c2);
		}
		return min(dp[0],dp[1]);
	}	
};

// Driver Code

int main() {
		Solution sol;
		vector<int> cost={1};
		cout<<sol.minCostClimbingStairs(cost)<<endl;
		return 0;
}