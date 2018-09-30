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
        LL n;
        cin>>n;
        int ans=0;
        LL j = 0LL;
        while(j<=floor(log2(n))){
            if(n & 1LL<<j)
                break;
            ans++;
            j++;
        }
        j++;
        while(j<=floor(log2(n))){
            if(n & 1LL<<j)
                ans++;
            j++;
        }
        (ans%2)?cout<<"Louise"<<endl:cout<<"Richard"<<endl;
    }
    return 0;
}
