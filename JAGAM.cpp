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
		int n,z1,z2;
		cin>>n>>z1>>z2;
		int arr[n],arr2[4*n];
		for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=0;
        if(z1==0 || z2==0)
            ans=2;
        for(int i=0,j=0;i<n;i++){
            if(abs(arr[i])==abs(z1) || abs(arr[i])==abs(z2)){
                ans=1;
            }
            arr2[j++]=z1+arr[i];
            arr2[j++]=z1-arr[i];
            arr2[j++]=z2+arr[i];
            arr2[j++]=z2-arr[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(ans!=0)
                break;
            flag=0;
            for(int j=0;j<4*n;j++){
                if((arr[i])==arr2[j]){
                    flag=1;
                    break;
                }
            }
            if(!flag)
                break;
            flag=0;
            for(int j=0;j<4*n;j++){
                if((-arr[i])==arr2[j]){
                    flag=1;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            ans=2;
        cout<<ans<<endl;
	}
	return 0;
}
