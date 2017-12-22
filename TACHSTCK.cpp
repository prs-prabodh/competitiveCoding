/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	sort(a,a+n);
	int c=0;
	for(int i=0;i<n;i++){
        if(i<n-1&&a[i+1]-a[i]<=d){
            c++;
            i++;
        }
	}
	cout<<c<<endl;
	return 0;
}
