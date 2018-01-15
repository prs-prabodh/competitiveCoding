/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int alive=n;
	int a[n];
	for(int i=0;i<n;i++)
        cin>>a[i];
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        for(int k=0;k<n;k++){
            if((k&x)==k&&a[k]>0){
                a[k]-=y;
                if(a[k]<=0)
                    alive--;
            }
        }
        cout<<alive<<endl;
    }
	return 0;
}
