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
		int x,y,k,n,flag=0;
		cin>>x>>y>>k>>n;
		for(int i=0;i<n;i++){
            int p,c;
            cin>>p>>c;
            if(p>=(x-y)&&k>=c&&!flag){
                cout<<"LuckyChef"<<endl;
                flag=1;
            }
		}
		if(!flag)
            cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
