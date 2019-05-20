/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll shift(ll mask){
    for(int i=0;i<65;i++){
    	// cout<<"Comp "<<i<<" "<<(mask & 1LL<<i)<<endl;
        if(mask & 1LL<<i)
            return mask^=(1LL<<i);
    }
}
int main()
{
	ll n, k;
    cin>>n>>k;
    ll maxPow = log2((long double)n)+1;
    ll target = (long long)powl(2, maxPow)-1LL;
    if(k==1){
        cout<<n<<endl;
    }
    else{
        cout<<target<<endl;
    }
    return 0;
}