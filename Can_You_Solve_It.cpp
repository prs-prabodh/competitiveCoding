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
		int arr1[n],arr2[n],max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX,x;
		for(int i=0;i<n;i++){
            cin>>x;
            max1=max(max1,x-i);
            max2=max(max2,x+i);
            min1=min(min1,x-i);
            min2=min(min2,x+i);
		}
        int ans=max(max1-min1,max2-min2);
        cout<<ans<<endl;
	}
	return 0;
}
