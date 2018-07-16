/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long exp(long long base, long long exponent)
{
    if(exponent==0)
        return 1LL;
    long long temp=exp(base,exponent/2);
    long long res=((temp%MOD)*(temp%MOD))%MOD;
    if(exponent%2)
        res=(base*res)%MOD;
    return res;
}
int main()
{
    long long n,k,ans;
    cin>>n>>k;
    long long P,Qinv;
    P=(exp(2LL,n-1)-n)%MOD;
    Qinv=(exp(2LL,((n-1)*(MOD-2))))%MOD;
    ans=(P*Qinv)%MOD;
    cout<<ans<<endl;
    return 0;
}
