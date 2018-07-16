/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int N;
        cin>>N;
        long long exponent = floor(N/2);
        cout<<1<<" "<<1;
        for(int i=0;i<exponent;i++)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}
