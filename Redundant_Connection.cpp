/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

int *parent;
void init(int x){
	for(int i=1;i<x;i++)
		parent[i]=i;
}
int findParent(int x){
	if(parent[x]!=x){
		findParent(parent[x]);
	}
	else return x;
}
void unionParents(int x, int y){
	int px=findParent(x);
	int py=findParent(y);
	parent[py]=px;
}
class Solution {
	public:
	vector<int> findRedundantConnection (vector<vector<int>> &edges) {
		int n=edges.size();
		parent=new int[n+1];
		init(n+1);
		for(int i=0;i<n;i++){
			if(findParent(edges[i][0])==findParent(edges[i][1])){
				return edges[i];
			}
			unionParents(edges[i][0],edges[i][1]);
		}
	}	
};

// Driver Code

// int main() {
// 		Solution sol;
// 		vector<vector<int>> v({{1,2}, {2,3}, {3,4}, {1,4}, {1,5}});
// 		vector<int> ans = sol.findRedundantConnection(v);
// 		cout<<ans[0]<<' '<<ans[1]<<endl;
// 		return 0;
// }