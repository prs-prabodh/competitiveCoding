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
	int rob (vector<int> &nums) {
		int add,n=nums.size(),maxNum,ans=0;
		if(n==0)
			return ans;
		else if(n==1)
			return ans=nums[0];
		else if(n==2)
			return ans=max(nums[0],nums[1]);
		maxNum=nums[n-1];
		ans=max(nums[n-1],nums[n-2]);
		for(int i=n-3;i>=0;i--){
			nums[i]+=maxNum;
			ans=max(ans, nums[i]);
			maxNum=max(maxNum, nums[i+1]);
		}
		return ans;
	}	
};

// Driver Code

// int main() {
// 	Solution sol;
// 	vector<int> v={2,7,9,3,1};
// 	cout<<sol.rob(v);
// 	return 0;
// }
