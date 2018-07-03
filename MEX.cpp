/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define N 200001
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		vector<bool> a(200001);
		for(int i=0;i<n;i++){
            int t;
            cin>>t;
            a[t]=true;
		}
		int x=0;
		while(x<200001){
            if(a[x]!=true&&k<=0)
                break;
            else if(a[x]!=true&&k>0){
                k--;
                x++;
            }
            else
                x++;
		}
		cout<<x<<endl;
	}
	return 0;
}
