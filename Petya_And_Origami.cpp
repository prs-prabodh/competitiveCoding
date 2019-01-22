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
	
	int n,k;
	cin>>n>>k;
	LL ans=0;
	ans+=ceil((double)2*n/k);
	ans+=ceil((double)5*n/k);
	ans+=ceil((double)8*n/k);
	cout<<ans<<endl;
    return 0;
} 