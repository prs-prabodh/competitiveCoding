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
	int climbStairs (int n) {
		if(n==1)
			return 1;
		int dp[n]={0};
		for(int i=n-1;i>=0;i--){
			int c1=i+1<n?dp[i+1]:1;
			int c2=i+2<n?dp[i+2]:i+2>n?0:1;
			dp[i]=c1+c2;
		}
		return dp[0];
	}	
};

// Driver Code

// int main() {
// 		Solution sol;
// 		int n=5;
// 		cout<<sol.climbStairs(n);		
// 		return 0;
// }