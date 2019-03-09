/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

vector<int> a;
vector<vector<vector<int>>> dp;

bool eval(int l, int r, int alex, int lee, int turn) {
	if(l>r)
		return alex>lee;
	if(dp[l][r][turn])
		return dp[l][r][turn];
	if(turn)
		return dp[l][r][turn]=eval(l+1,r,alex,lee+a[l],turn^1) && eval(l,r-1,alex,lee+a[r],turn^1);
	else
		return dp[l][r][turn]=eval(l+1,r,alex+a[l],lee,turn^1) || eval(l,r-1,alex+a[r],lee,turn^1);
}

class Solution {
	public:
	bool stoneGame (vector<int> &piles) {
		a=piles;
		int l=0, r=piles.size()-1, alex=0, lee=0, turn=0;
		dp.resize(piles.size(),vector<vector<int>>(piles.size(), vector<int> (2,0)));
		return eval(l,r,alex,lee,turn);
	}	
};

// Driver Code

int main() {
		Solution sol;
		vector<int> piles={8,9,7,6,7,6};
		cout<<sol.stoneGame(piles);
		return 0;
}