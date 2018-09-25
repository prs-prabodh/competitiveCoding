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
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int mates[n],opt[]={1,2,5};
        for(int i=0;i<n;i++)
        cin>>mates[i];
        sort(mates,mates+n);
        long long ans=LLONG_MAX;
        for(int lowest=mates[0];lowest>mates[0]-5;lowest--){
            LL temp=0LL;
            for(int i=0;i<n;i++){
                int copy=mates[i];
                int j=2;
                while(copy>lowest && j>=0){
                    if(opt[j]<=copy-lowest){
                        int add = (copy-lowest)/opt[j];
                        copy-=(opt[j]*add);
                        temp+=(long long)add;
                    }
                    j--;
                }
            }
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
