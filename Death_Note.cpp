/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long days,limit,pages=0LL,curr=0LL,x;
    cin>>days>>limit;
    for(int i=0;i<days;i++){
        cin>>x;
        curr+=x;
        pages=(curr/limit);
        curr%=limit;
        cout<<pages<<' ';
    }
    cout<<endl;
    return 0;
}
