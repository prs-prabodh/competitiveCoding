/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
long long int C(long long int s)
{
    return (s*(s-1))/2;
}
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int s=n/k;
	long long int rem=n%k;
	long long int ans=((rem*C(s+1))+((k-rem)*C(s)));
	cout<<ans<<endl;
	return 0;
}
