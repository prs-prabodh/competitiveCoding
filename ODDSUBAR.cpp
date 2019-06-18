/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test = 0;
    cin>>test;
    while(test--){
       int n;
       cin>>n;
       ll a[n], sum=0LL, presum[n], rec[2]={0LL, 0LL};
       for(int i=0;i<n;i++){
           scanf("%lld", &a[i]);
           presum[i]=sum+a[i];
           sum=presum[i];
           rec[(int)(sum%2LL)]++;
       }
       ll ans = rec[1] + (rec[0]*rec[1]);
       printf("%lld\n", ans);
    }
    return 0;
}