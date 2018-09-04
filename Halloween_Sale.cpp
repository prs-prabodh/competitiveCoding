/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,d,m,s;
    cin>>p>>d>>m>>s;
    long long counter=0LL,currCost=p;
    while(currCost<=s){
        counter++;
        s-=currCost;
        currCost=((currCost-d)>m)?currCost-d:m;
    }
    cout<<counter<<endl;
    return 0;
}
