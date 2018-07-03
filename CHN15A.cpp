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
		int n,k,c=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		for(int i=0;i<n;i++){
            if((a[i]+k)%7==0)
                c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
