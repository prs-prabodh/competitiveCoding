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
	int findJudge (int N, vector<vector<int>> &trust) {
		set<int> cnt[N+1], cnt1[N+1];
		int n=trust.size();
		for(int i=0;i<n;i++){
			if(trust[i][0]!=trust[i][1]){
				cnt[trust[i][1]].insert(trust[i][0]);
				cnt1[trust[i][0]].insert(trust[i][1]);
			}
		}
		int judge=0,possibleJudges=0;
		for(int i=1;i<=N;i++){
			if(cnt[i].size()==N-1 && cnt1[i].size()==0){
				judge=i;
				possibleJudges++;
			}
		}
		return possibleJudges==1?judge:-1;
	}	
};

// Driver Code

// int main() {
// 		Solution sol;
// 		vector<vector<int>> trust={{1,2}};
// 		cout<<sol.findJudge(2,trust)<<endl;
// 		return 0;
// }