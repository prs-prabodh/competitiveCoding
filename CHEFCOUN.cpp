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
		int n;
		cin>>n;
		vector<unsigned int> b(n);
		int flag=0;
		unsigned int c;
		if(4294967291%(n-2)==0)
            c=(4294967291/(n-2));
        else{
            c=(4294967291/(n-3));
            flag=1;
        }
		for(int i=0;i<n-3;i++){
            cout<<c<<" ";
		}
		if(!flag)
            cout<<c<<" ";
        else{
            cout<<(4294967291-(c*(n-3)))<<" ";
        }
        cout<<2<<" ";
        cout<<1<<endl;
	}
	return 0;
}
