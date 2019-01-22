/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
LL*keeper;
LL find(LL n)
{
	for(LL i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return i;
	return n;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	LL n;
	cin>>n;
	LL div = find(n);
	// cout<<div<<endl;
	cout<<(n-div)/2 + 1<<endl;
    return 0;
} 