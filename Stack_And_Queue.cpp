/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<long long> arr(n,0LL),forw(k,0LL),backw(k,0LL);
	for(int i=0;i<n;i++){
        cin>>arr[i];
        forw[0]=arr[0];
        if(i<k && i>0){
            forw[i]=forw[i-1]+arr[i];
        }
	}
	for(int i=n-1,j=k-2;i>n-k;i--,j--){
        backw[j]=backw[j+1]+arr[i];
	}
	long long maxSum=0;
	for(int i=0;i<k;i++){
        forw[i]+=backw[i];
        maxSum=max(maxSum,forw[i]);
	}
	cout<<maxSum<<endl;
	return 0;
}
