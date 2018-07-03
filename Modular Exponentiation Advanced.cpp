/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
const int M = (1e9)+7;
long long int mod(long long a, long long b)
{
    if(a==1||b==0)
        return 1;
    if(b==1)
        return a%M;
    if(b==2)
        return ((a%M)*(a%M))%M;
    if(b%2==0)
        return mod(mod(a,b/2),2);
    if(b%2!=0)
        return ((a%M)*(mod(mod(a,(b-1)/2),2))%M)%M;
    return 0;                                              //just to ensure function has a default return value. This is never needed.
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		string as,b;
		cin>>as>>b;
		long long int a=0;
		for(int i=0;as[i]!='\0';i++){                      //to calculate a from string in modulo 1e9+7
            a=(((a*10)%M)+((as[i]-'0')%M))%M;
		}
		long long int ans=mod(a,(b[0]-'0'));
		for(int i=1;b[i]!='\0';i++){                       //to iteratively find the answer by calculating smaller answers.
            ans=((mod(ans,10))*(mod(a,(b[i]-'0'))))%M;
		}
		cout<<ans<<endl;
	}
	return 0;
}
