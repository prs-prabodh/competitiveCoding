/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
vector<LL> drivers,riders;
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n,m;
	cin>>n>>m;
	int a[n+m];
	for(int i=0;i<n+m;i++) cin>>a[i];
	drivers.push_back(INT_MIN);
	for(int i=0;i<n+m;i++){
		int x;
		cin>>x;
		if(x) drivers.push_back(a[i]);
		else riders.push_back(a[i]);
	}
	drivers.push_back(INT_MAX);
	unordered_map<int,int> ans;
	for(int i=0;i<n;i++){
		LL left=*(lower_bound(drivers.begin(),drivers.end(),riders[i])-1);
		LL right=*upper_bound(drivers.begin(),drivers.end(),riders[i]);
		if(riders[i]-left>right-riders[i])
			ans[right]++;
		else ans[left]++;
	}
	for(auto i:drivers) if(i!=INT_MIN && i!=INT_MAX) cout<<ans[i]<<' ';
	cout<<endl;
    return 0;
} 