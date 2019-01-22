/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return false;
    return true;
}
int divs(int x)
{
    vector<int> div;
    for(int i=2;i<x;i++)
        if(x%i==0)
            div.push_back(i);
    for(int i=0;i<div.size();i++)
        if(!isPrime(div[i])) return false;
    return (div.size()==2);
}
int main()
{
    divs(24);
    // divs(35);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int flag=0;
        for(int i=1;i<n;i++){
            if(divs(i) && divs(n-i)){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}
