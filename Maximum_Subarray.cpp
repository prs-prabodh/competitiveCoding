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
	int maxSubArray (vector<int> &nums) {
		int n=nums.size();
		int a[n]={0}, maxSum=INT_MIN;
		a[0]=nums[0];
		for(int i=1;i<n;i++){
			a[i]=max(a[i-1]+nums[i],nums[i]);
			maxSum=max(a[i],maxSum);
		}
		return maxSum;
	}	
};

// Driver Code

// int main() {
// 		Solution sol;
// 		vector<int> a={-2,1,-3,4,-1,2,1,-5,4};
// 		cout<<sol.maxSubArray(a);
// 		return 0;
// }