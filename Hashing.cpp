/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,string>> hashTable(n,make_pair(-1,""));
	int size=n;
	for(int i=0;i<n;i++){
        int roll;
        string name;
        cin>>roll>>name;
        int index=roll%size;
        while(hashTable[index].first!=-1){
            index=(index+1)%size;
        }
        hashTable[index].first=roll;
        hashTable[index].second=name;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
        int x;
        cin>>x;
        int index=x%size;
        while(hashTable[index].first!=x){
            index=(index+1)%size;
        }
        cout<<hashTable[index].second<<endl;
	}
	return 0;
}
