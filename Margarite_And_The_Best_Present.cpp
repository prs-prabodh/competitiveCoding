/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
inline LL even(LL x){
	return x*(x+1);
}

inline LL odd(LL x){
	return x*x;
}
LL sum(LL x){
	LL ans=even(x/2);
	ans-=odd(x/2);
	if(x%2) ans-=x;
	return ans;
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int test;
	cin>>test;
	while(test--){
		LL l,r;
		cin>>l>>r;
		cout<<sum(r)-sum(l-1)<<endl;		
	}
    return 0;
} 