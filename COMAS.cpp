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
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		set<int> notMax, cand, querySet;
		// bool notMaxLog[n+1];
		// memset(notMaxLog,0,sizeof(bool)*(n+1));
		cout<<"? "<<"1 2 3 4 5"<<endl;
		querySet.insert({1,2,3,4,5});
		/*for(auto i:querySet)
			cout<<i<<' ';
		cout<<endl;*/
		int notMax1, notMax2;
		cin>>notMax1>>notMax2;
		notMax.insert(notMax1);
		notMax.insert(notMax2);
		for(int i=1;i<=5;i++)
			if(i!=notMax1 && i!=notMax2)
				cand.insert(i);
		int looper=6;
		while(looper<=n){
			querySet.clear();
			for(auto i:cand)
				querySet.insert(i);
			cout<<"? ";
			for(auto i:querySet)
				cout<<i<<' ';
			cout<<looper<<' ';
			querySet.insert(looper);
			looper++;
			if(looper<=n){
				cout<<looper<<endl;
				querySet.insert(looper);
				looper++;
			}
			else{
				cout<<*(notMax.begin())<<endl;
				querySet.insert(*(notMax.begin()));
			}
			cin>>notMax1>>notMax2;
			notMax.insert(notMax1);
			notMax.insert(notMax2);
			cand.clear();
			for(auto i:querySet)
				if(i!=notMax1 && i!=notMax2)
					cand.insert(i);
		}
		vector<int> candMax,dummy;
		for(auto i:cand)
			candMax.push_back(i);
		int counter=1;
		for(auto i:notMax){
			if(counter>3)
				break;
			dummy.push_back(i);
			counter++;
		}
		set<pair<pair<int,int>, pair<int,int> > > container;
		bool flag=0;
		int ans=0;
		for(int i=0;i<candMax.size();i++){
			for(int j=i+1;j<candMax.size();j++){
				cout<<"? "<<candMax[i]<<' '<<candMax[j]<<' ';
				for(auto i:dummy)
					cout<<i<<' ';
				cout<<endl;
				int d1,d2;
				cin>>d1>>d2;
				for(auto k:container){
					if(k.first==make_pair(d1,d2)){
						/*cout<<k.first.first<<endl;
						cout<<k.first.second<<endl;*/

						unordered_map <int,int> count;
						count[k.second.first]++;
						count[k.second.second]++;
						if(count[k.second.second]==2){
							flag=1;
							ans=k.second.second;
							break;
						}
						count[candMax[i]]++;
						if(count[candMax[i]]==2){
							flag=1;
							ans=candMax[i];
							break;
						}
						count[candMax[j]]++;
						if(count[candMax[j]]==2){
							flag=1;
							ans=candMax[j];
							break;
						}
					}
				}
				container.insert({{d1,d2},{candMax[i],candMax[j]}});
				if(flag) break;
			}
			if(flag) break;
		}
		cout<<"! "<<ans<<endl;
	}
    return 0;
} 