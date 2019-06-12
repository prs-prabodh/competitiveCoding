/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    string x;
    cin>>x;
    int rm = (n - 11) / 2;
    int nonets=0, eights=0, p=0;
    while(p<n){
        if(x[p]=='8') eights++;
        else if(eights<rm+1) nonets++;
        p++;
    }
    if(eights<=rm || nonets>rm){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}