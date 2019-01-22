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
    int s;
    cin>>s;
    if(s<=90){
        cout<<0<<" No punishment"<<endl;
    }
    else if(s>90 && s<=110){
        cout<<(s-90)*300<<" Warning"<<endl;
    }
    else{
        cout<<(s-90)*500<<" License removed"<<endl;
    }
    return 0;
}
