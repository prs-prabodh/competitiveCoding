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
		int m,x,y,c=0;
		cin>>m>>x>>y;
		int a[100]={0},b[m];
		for(int i=0;i<m;i++){
            int h;
            cin>>h;
            for(int j=h-(x*y)-1;j<h+(x*y);j++){
                if(j>-1&&j<101)
                    a[j]=1;
            }
		}
		for(int i=0;i<100;i++){
            if(!a[i])
                c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
