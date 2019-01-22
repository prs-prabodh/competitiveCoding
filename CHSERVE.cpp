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
        LL p1,p2,k;
        cin>>p1>>p2>>k;
        LL ans = (p1+p2)/k + 1;
        ans%2LL?cout<<"CHEF"<<endl:cout<<"COOK"<<endl;
    }
    return 0;
}
