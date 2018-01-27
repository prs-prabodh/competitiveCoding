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
		long long int u1,u2;
		cin>>u1>>u2;
		if(((u2*u2)-(u1*u1))<=0)
            cout<<-1<<endl;
        else{
            long double ans=sqrt((long double)(u2*u2)-(u1*u1));
            long long int a=(long long int)ans;
            if(ans-a>0)
                cout<<(long long int)ans+1<<endl;
            else cout<<(long long int)ans<<endl;
        }
	}
	return 0;
}
