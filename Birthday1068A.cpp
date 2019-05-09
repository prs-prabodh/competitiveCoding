/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;

 bool valid(ll mid, ll m, ll k, ll l){
 	return ((m*mid) - k >= l)? true:false;
 }
 
 int main() {
 	ll n,m,k,l;
 	cin>>n>>m>>k>>l;
 	ll left=1LL, right=(ll)floor(n/(1.00*m)), ans=-1LL;
 	while(left<=right){
 		ll mid=left+(right-left)/2;
 		if(valid(mid, m, k, l)){
 			ans=mid;
 			right=mid-1;
 		}
 		else left=mid+1;
 	}
 	cout<<ans<<endl;
 	return 0;
 }