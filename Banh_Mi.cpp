/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define ll long long
using namespace std;
ll exp(ll a, ll b)
{
    if(b==0||a==1)
        return 1;
    if(b==1)
        return a%M;
    if(b==2)
        return ((a%M)*(a%M))%M;
    if(b%2!=0)
        return ((a%M)*exp(exp(a,(b-1)/2),2))%M;
    if(b%2==0)
        return exp(exp(a,b/2),2)%M;
    return 439579396;
}
ll sum(int first, int terms)
{
	ll ans=0;
	ans=first*(exp(2,terms)-1);
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	int one[n+2],zero[n+2];
	memset(one,0,sizeof(int)*(n+2));
	memset(zero,0,sizeof(int)*(n+2));
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			one[i+2]=one[i+1]+1;
			zero[i+2]=zero[i+1];
		}
		else{
			one[i+2]=one[i+1];
			zero[i+2]=zero[i+1]+1;
		}
	}
	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
		int ones=one[r+1]-one[l];
		int zeros=zero[r+1]-zero[l];
		ll ans=0;
		ans=(ans%M + sum(1,ones))%M;
		ans=(ans%M + sum(exp(2,ones)-1,zeros))%M;
		cout<<ans<<endl;
	}
    return 0;
} 