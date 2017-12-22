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
		int a[n];
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		int h=-1,d[2][9];
		for(int i=0;i<2;i++){
            for(int j=0;j<9;j++){
                d[i][j]=0;
            }
		}
		int flag=0;
		for(int i=n-1;i>-1;i--){
            flag=0;
            if(a[i]<h){
                for(int j=1;a[i]+j<10;j++){
                    if(d[0][a[i]+j]){
                        a[d[1][a[i]+j]]=a[i];
                        a[i]+=j;
                        sort(a+i+1,a+n);
                        flag=1;
                    }
                    if(flag)
                        break;
                }
            }
            else{
                d[0][a[i]]++;
                d[1][a[i]]=i;
                if(a[i]>h)
                    h=a[i];
            }
            if(flag)
                break;
		}
		if(flag){
            for(int i=0;i<n;i++){
                cout<<a[i];
            }
            cout<<endl;
		}
		else cout<<-1<<endl;
	}
	return 0;
}
