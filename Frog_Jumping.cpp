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
	
	int test;
	cin>>test;
	while(test--){
		LL a,b,k,ans;
		cin>>a>>b>>k;
		ans=(a-b)*(k/2);
		k%2?cout<<ans+a<<endl:cout<<ans<<endl;
	}
    return 0;
} 