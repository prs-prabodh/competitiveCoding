/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*	Email - prabodhranjan98@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;
long long *sum,*arr;

//for spotting corner cases
bool exceptn=false;
int range=-1;
int binarySearch(int k, int n)
{
    if((double)sum[n-1]/(n)==(double)k)
        return 0;
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if((double)sum[m]/(m+1)==(double)k){
            if(arr[m]==1 || (exceptn && m<=range))
                return 0;
            return m;
        }
        else if((double)sum[m]/(m+1)<(double)k){
            l=m+1;
        }
        else if((double)sum[m]/(m+1)>(double)k){
            r=m-1;
        }
    }
    return l;
}
int main()
{
	int test=1;
	while(test--){
		int n,q;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        sum=new long long[n];

        //for spotting corner cases
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                exceptn=true;
            }
            else{
                range=i;
                break;
            }
        }

        sum[0]=arr[0];
        for(int i=1;i<n;i++)
            sum[i]=sum[i-1]+arr[i];
        cin>>q;
        for(int i=0;i<q;i++){
            int k;
            cin>>k;
            cout<<binarySearch(k,n)<<endl;
        }
	}
	return 0;
}
