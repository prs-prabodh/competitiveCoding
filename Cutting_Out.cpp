/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
set<int> a;
unordered_map<int,int> f;
bool possible(int x, int k)
{
	LL possK=0;
	for(auto i:a)
		possK+=f[i]/x;
	return possK>=k? true:false;
	// return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n,k;
	cin>>n>>k;
	int minC=INT_MAX,maxC=INT_MIN;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		a.insert(num);
		f[num]++;
		minC=min(minC,f[num]);
		maxC=max(maxC,f[num]);
	}
	int l=minC,r=maxC,ans=1;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(possible(mid,k)){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	vector<int> ansSet;
	int filled=0;
	while(filled<k){
		for(auto x:a){
			if(filled<k){
				int curr=f[x]/ans;
				for(int i=0;i<min(curr,k-filled);i++)
					ansSet.push_back(x);
				filled+=min(curr,k-filled);
			}
		}
	}
	for(auto i:ansSet) cout<<i<<' ';
	cout<<endl;
    return 0;
} 