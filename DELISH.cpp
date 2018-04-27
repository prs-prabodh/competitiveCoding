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
		long long int a[n];
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		long long int max1[n],min1[n],max2[n],min2[n];
		max1[0]=min1[0]=a[0];
		for(int i=1;i<n-1;i++){
            max1[i]=max(a[i],(max1[i-1]+a[i]));
            min1[i]=min(a[i],(min1[i-1]+a[i]));
		}
		max2[n-1]=min2[n-1]=a[n-1];
		for(int i=n-2;i>-1;i--){
            max2[i]=max(a[i],(max2[i+1]+a[i]));
            min2[i]=min(a[i],(min2[i+1]+a[i]));
		}
		long long int ans=INT_MIN;
		for(int i=0;i<n-1;i++){
            ans=max(ans,max(abs(min1[i]-max2[i+1]),abs(max1[i]-min2[i+1])));
		}
		cout<<ans<<endl;
	}
	return 0;
}
