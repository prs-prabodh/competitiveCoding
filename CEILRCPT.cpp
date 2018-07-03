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
		int c=0;
		for(int i=1;n>=i;(i<<=1)){
            if((n&i)==i){
                if(i<=2048)
                    c++;
                else c+=(i/2048);
            }
		}
		cout<<c<<endl;
	}
	return 0;
}
