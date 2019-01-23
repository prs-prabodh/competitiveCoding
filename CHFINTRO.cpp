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
	
	int n,r,R;
	cin>>n>>r;
	for(int i=0;i<n;i++){
		cin>>R;
		R>=r?cout<<"Good boi"<<endl:cout<<"Bad boi"<<endl;
	}
    return 0;
} 