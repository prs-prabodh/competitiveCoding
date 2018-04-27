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
		int a[n];
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		int f[n],ans;
		f[0]=a[0];
		ans=f[0];
		for(int i=1;i<n;i++){
            f[i]=min(a[i],(f[i-1]+a[i]));
            ans=min(ans,f[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
