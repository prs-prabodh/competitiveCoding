/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll *a, *presum, sum=0LL;
int main()
{
    int n, k, m;
    cin>>n>>k>>>m;
    a=new ll[n];
    presum=new ll[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    presum[0]=0;
    for(int i=1;i<n;i++){
        presum[i]=presum[i-1]+a[i-1];
    }
    sum=presum[n-1]+a[n-1];
    float ans=FLT_MIN;
    for(int i=0;i<n;i++){
        float newMean = sum - presum[i] + min((n-i)*k, m);
        newMean/=(1.00)*(n-i);
        ans=max(ans, newMean);
    }
    cout<<ans<<endl;
    return 0;
}