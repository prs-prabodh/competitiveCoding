/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	long long ans = n*m;
	unordered_map<long long, vector<pair<long long,long long>>> mp;
	for(int i=0;i<k;i++){
        long long r,c1,c2;
        cin>>r>>c1>>c2;
        mp[r].push_back(make_pair(c1,c2));
	}
	for(auto i:mp){
        sort(i.second.begin(),i.second.end());
        long long start,en;
        start=en=0;
        for(auto j:i.second){
            if(en<j.second){
                start=max(start,j.first);
                en=j.second;
                ans-=(en-start+1);
                start=en+1;
            }
        }
	}
	cout<<ans<<endl;
	return 0;
}
