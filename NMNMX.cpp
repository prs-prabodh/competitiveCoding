/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define P 1000000006
using namespace std;
long long C[5001][5001];
long long comb(int n, int r)
{
    if(n==r||r==0)
        return C[n][r] = 1LL;
    if(r==1)
        return C[n][r] = (long long)n;
    if(C[n][r])
        return C[n][r];
    else return C[n][r]=((comb(n-1,r)%P)+(comb(n-1,r-1)%P))%P;
}
long long exp(long long  a, long long k) {
    if (k == 0)
        return 1LL;
    long long temp = exp(a, k/2);
    long long res;

    res = ( ( temp % MOD ) * (temp % MOD) ) % MOD;
    if (k % 2 == 1)
        res = ((a % MOD) * (res % MOD)) % MOD;
    return res;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        long long n,k,ans=1LL;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        long long totalOcc=comb(n-1,k-1);
        for(int i=0;i<n;i++){
            long long totalMin=0LL,totalMax=0LL;
            if(i<=n-k)
                totalMin=comb(n-i-1,k-1);
            if(i>=k-1)
                totalMax=comb(i,k-1);
            long long exponent=totalOcc-totalMax-totalMin;
            if(exponent<0){
                while(exponent<0)
                    exponent+=P;
            }
            long long newProduct=exp(arr[i],exponent);
            ans=((ans%MOD)*(newProduct%MOD))%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}
