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
		long long int n,c,sum=0;
		cin>>n>>c;
		for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            sum+=x;
		}
		if(sum<=c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}
