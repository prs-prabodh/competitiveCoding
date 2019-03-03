/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;
 
 int main() {
 	ll n;
 	cin>>n;
 	ll cnt=0LL, prev=0LL;
 	while(n--){
 		ll a,b;
 		cin>>a>>b;
 		cnt+=min(a,b)>=prev?min(a,b)-prev+1:0;
 		prev=max(max(a,b),min(a,b)+1);
 	}
 	cout<<cnt<<endl;
 	return 0;
 }