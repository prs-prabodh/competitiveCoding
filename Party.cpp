/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;
 vector<vector<int>> e;
 int dfs(int n){
 	// cout<<"call"<<endl;
 	int ans=0;
 	for(int i=0;i<e[n].size();i++){
 		ans=max(ans, 1+dfs(e[n][i]));
 	}
 	return ans;
 }
 int main() {
 	int n;
 	cin>>n;
 	e.resize(n+1);
 	for(int i=0;i<n;i++){
 		int x;
 		cin>>x;
 		if(x>0)
 			e[x].push_back(i+1);
 	}
 	int ans=INT_MIN;
 	for(int i=1;i<=n;i++){
 		ans=max(ans, 1+dfs(i));
 	}
 	cout<<ans<<endl;
 	return 0;
 }