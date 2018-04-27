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
		int a[4];
		for(int i=0;i<4;i++)
            cin>>a[i];
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3])
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}
