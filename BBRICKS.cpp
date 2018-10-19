/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
LL exp(LL x, LL y)
{
    LL res = 1LL;
    x = x % M;
    while (y > 0LL)
    {
        if (y & 1LL)
            res = (res*x) % M;
        y = y>>1LL;
        x = (x*x) % M;
    }
    return res % M;
}
long long inv(long long a, long long b){
 return 1<a ? b - inv(b%a,a)*b/a : 1;
}
LL ncr(LL n, LL k)
{
    LL result=1LL;
    for(LL i=n;i>n-k;i--)
        result = (result%M * i%M)%M;
    LL denom=1LL;
    for(LL i=1LL;i<=k;i++)
        denom = (denom%M * i%M)%M;
    result = (result%M * inv(denom,M))%M;
    return result%M;
}
LL arrange(LL n, LL k)
{
    n++;
    LL sum=0LL;
    for(LL i=1LL;i<=min(k,min(n,n-k));i++)
        sum=(sum%M + (ncr(k-1,i-1)%M * (ncr(n-k,i)%M * exp(2,i)%M)%M)%M)%M;
    return (sum)%M;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        LL n,k;
        cin>>n>>k;
        cout<<arrange(n,k)<<endl;
    }
    return 0;

}
