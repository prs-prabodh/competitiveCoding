/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
long long exp(int count)
{
    long long ans=1LL;
    for(int i=0;i<count;i++)
        ans*=2LL;
    return ans;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n,m,count=0;
        long long ans=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%m==0)
                count++;
        }
        ans+=exp(count)-1;
        cout<<ans<<endl;
    }
    return 0;
}
