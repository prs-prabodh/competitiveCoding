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
		int n,p;
		cin>>n>>p;
		int c=0,h=0;
		vector<int> a(n);
		for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=p/2)
                c++;
            else if(a[i]<=p/10)
                h++;
		}
		if(c==1&&h==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
	return 0;
}
