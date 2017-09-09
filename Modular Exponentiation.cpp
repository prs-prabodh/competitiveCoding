/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9;
long long int mod(long long a, long long b)
{
    if(b==0)
        return 1;
    if(a==1)
        return 1%M;
    if(b==1)
        return a%M;
    if(b==2)
        return ((a%M)*(a%M))%M;
    if(b%2!=0)
        return (a%M)*mod(mod(a,(b-1)/2),2);
    if(b%2==0)
        return mod(mod(a,b/2),2);
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		long long int a,b;
		cin>>a>>b;
		int result = mod(a,b);
		cout<<result<<endl;
	}
	return 0;
}
