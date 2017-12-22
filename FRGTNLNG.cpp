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
		int n,k;
		cin>>n>>k;
		vector<string> a(n);
		bool prsnt[n]={0};
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		for(int i=0;i<k;i++){
            int x;
            cin>>x;
            while(x--){
                string w;
                cin>>w;
                for(int j=0;j<n;j++){
                    if(!prsnt[j]&&(a[j]==w))
                        prsnt[j]=true;
                }
            }
		}
		for(int i=0;i<n;i++){
            if(prsnt[i])
                cout<<"YES ";
            else cout<<"NO ";
		}
		cout<<endl;
	}
	return 0;
}
