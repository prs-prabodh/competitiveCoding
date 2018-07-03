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
		long long int h;
		cin>>h;
		if(h<4)
            cout<<0<<endl;
		else if(h%2==0)
            cout<<(h*(h-2))/8<<endl;
        else
            cout<<(int)((h-1)*(h-3))/8<<endl;
	}
	return 0;
}
