/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

int n;
vector<int> ans, dp(n,0);
vector<vector<int>> graph;

bool dfs(int s){
	if(dp[s])
		return dp[s]==1;
	dp[s]=-1;
	for(auto i:graph[s])
		if(!dfs(i))
			return false;
	return dp[s]=1;
}

class Solution {
	public:
	vector<int> eventualSafeNodes (vector<vector<int>> &g) {
		n=g.size();
		dp.resize(n,0);
		graph=g;
		for(int i=0;i<n;i++){
			if(dfs(i))
				ans.push_back(i);
		}
		return ans;
	}	
};

// Driver Code

// int main() {
// 		Solution sol;
// 		vector<vector<int>> g={{1,2},{2,3},{5},{0},{5},{},{}};
// 		for(auto i:sol.eventualSafeNodes(g))
// 			cout<<i<<' ';
// 		return 0;
// }