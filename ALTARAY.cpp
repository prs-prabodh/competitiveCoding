/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int iden(int x)
{
    if(x==abs(x))
        return 1;
    else return 0;
}
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
		int ans[n],sign=iden(a[n-1]);
		ans[n-1]=1;
		for(int i=n-2;i>-1;i--){
            if(iden(a[i])!=sign){
                ans[i]=(ans[i+1]+1);
            }
            else{
                ans[i]=1;
            }
            sign=iden(a[i]);
		}
		for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
