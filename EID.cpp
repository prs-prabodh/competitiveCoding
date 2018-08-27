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
		int arr[n],minDiff=INT_MAX;
		for(int i=0;i<n;i++){
            cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(minDiff>diff){
                minDiff=diff;
            }
		}
		cout<<minDiff<<endl;
	}
	return 0;
}
