/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;
	vector<LL> a;
	unordered_map<int,int> m;
	set<int> ans;
	LL totalSum=0;
	LL count=0;
	for(int i=0;i<n;i++){
		LL x;
		cin>>x;
		totalSum+=x;
		a.push_back(x);
		m[x]++;
	}
	for(int i=0;i<n;i++){
		LL currSum=totalSum-a[i];
		// cout<<a[i]<<' '<<currSum<<' '<<currSum/2<<' '<<m.count(currSum/2)<<endl;
		if(currSum%2) continue;
		else if(m.count(currSum/2)){
			if(currSum/2 == a[i]){
				if(m[currSum/2]>1){
					count++;
					ans.insert(i+1);
				}
			}
			else{
				count++;
				ans.insert(i+1);
			}
		}
	}
	cout<<count<<endl;
	for(auto i:ans) cout<<i<<' ';
	cout<<endl;
    return 0;
} 