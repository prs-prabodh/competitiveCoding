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
        LL bit=1LL,nibble=0LL,byte=0LL;
        bit=(LL)max((double)1.00,pow(2,(n-1)/26));
        if(n%26LL==0){
            if(n!=0) n=26LL;
            else n=0LL;
        }
        else n%=26LL;
        if(n>10)
            byte=(n-1)/10>=1?bit:0LL;
        else nibble =(n-1)/2>=1?bit:0LL;
        if(byte || nibble) bit=0LL;
        cout<<bit<<' '<<nibble<<' '<<byte<<endl;
    }
    return 0;
}
