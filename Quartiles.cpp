/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int *arr;
int median(int l, int r)
{
    int n=r-l+1;
    if(n%2){
        return arr[l+(n/2)];
    }
    else{
        return (arr[l+(n/2)]+arr[l+(n/2-1)])/2;
    }
}
int main()
{
	int n,q1,q2,q3;
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    q2=median(0,n-1);
    int l,r;
    if(n%2){
        l=n/2-1;
        r=l+2;
    }
    else{
        l=n/2-1;
        r=l+1;
    }
    q1=median(0,l);
    q3=median(r,n-1);
    cout<<q1<<endl<<q2<<endl<<q3<<endl;
	return 0;
}
