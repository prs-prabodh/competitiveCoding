/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
        int n;
        cin>>n;
        int size=100003;
        vector<vector<int>> hashTable(size,vector<int>());
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int index=abs(x)%size;
            hashTable[index].push_back(x);
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            int index=abs(x)%size;
            int c=0;
            while(c<hashTable[index].size()&&hashTable[index][c]!=x){
                c++;
            }
            if(c<hashTable[index].size())
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
	}
	return 0;
}
