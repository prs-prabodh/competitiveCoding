/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1e18
#define LL long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    LL a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long double product=0;
    for (int i=0;i<n;i++)
            product+= (long double)(log((long double)(a[i])));
    LL l=a[0],r=a[n-1]+1,ans;
    while(l<=r){
        LL mid=l+(r-l)/2;
        long double temp = (long double)n * (long double)(log((long double)(mid)));
        if(product < temp){
			ans=mid;
			r=mid-1;
		}
        else
    		l=mid+1;
    }
	cout<<ans<<endl;
    return 0;
}
