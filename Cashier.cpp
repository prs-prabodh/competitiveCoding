/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
    int n,L,a;
    cin>>n>>L>>a;
    int ans=0,prevT=0;
    for(int i=0;i<n;i++){
        int t,l;
        cin>>t>>l;
        ans+=(t-prevT)/a;
        prevT=t+l;
    }
    ans+=(L-prevT)/a;
    cout<<ans<<endl;
    return 0;
}
