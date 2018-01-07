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
		long long int a[n];
		long long int t=0;
		for(int i=0;i<n;i++){
            cin>>a[i];
            t+=a[i];
		}
		long long int total[n]={0},maxN=INT_MIN,f[n]={0},ans;
		f[0]=ans=total[0]=a[0];
		for(int i=1;i<n;i++){
            f[i]=max(a[i],(f[i-1]+a[i]));
            ans=max(ans,f[i]);
            total[i]=total[i-1]+a[i];
            maxN=max(maxN,total[i]);
		}
		if(t>0){
            if(k>1){
                cout<<(f[n-1]+(t*(k-2))+maxN)<<endl;
            }
            else{
                cout<<ans<<endl;
            }
		}
		if(t<=0){
            if(k==1)
                cout<<ans<<endl;
            else{
                long long copy[2*n],f1[2*n]={0};
                for(int i=0;i<2*n;i++)
                    copy[i]=a[i%n];
                ans=f1[0]=copy[0];
                for(int i=1;i<2*n;i++){
                    f1[i]=max(copy[i],(f1[i-1]+copy[i]));
                    ans=max(ans,f1[i]);
                }
                cout<<ans<<endl;
            }
		}
	}
	return 0;
}
