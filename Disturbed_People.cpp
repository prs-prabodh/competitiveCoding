/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n-1;i++){
		if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
			count++;
			a[i-1]=-1;
			a[i+1]=-1;
		}
	}
	cout<<count<<endl;
    return 0;
} 