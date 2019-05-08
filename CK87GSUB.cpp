/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;

 // void print(int middle[]) {
 // 	for(auto i=0;i<26;i++)
 // 		cout<<middle[i]<<' ';
 // 	cout<<endl;
 // }

 ll C(ll n, ll r) {
 	return (n*(n-1))/2;
 }

 // bool middleIsPure(int middle[]) {
 // 	int cnt=0;
 // 	// cout<<endl;
 // 	for(int i=0;i<26;i++){
 // 		// cout<<middle[i]<<' ';
 // 		cnt+=middle[i]?1:0;
 // 	}
 // 	return cnt<2;
 // }

 // ll calc(int i, int j, string s) {
 // 	if(s[i]==s[i+1])
 // 		return C(j-i+1, 2);
 // 	else
 // 		return C(j-i-1, 2)+1LL;
 // }
 
 int main() {
 	int test=0;
 	cin>>test;
 	while(test--) {
 		string s;
 		cin>>s;
 		int len=s.length();
 		ll ans=0LL;
 		if(len<2){
 			cout<<ans<<endl;
 			continue;
 		}
 		int p1=0, p2=0;
 		for(int i=1;i<len;i++){
 			if(s[i]==s[p1]){
 				p2++;
 			}
 			else{
 				ans+=C(p2-p1+1, 2);
 				if(p1>0 && p2<len-1 && s[p1-1]==s[p2+1]) ans++;
 				p1=p2=i;
 			}
 		}
 		ans+=C(p2-p1+1, 2);
		if(p1>0 && p2<len-1 && s[p1-1]==s[p2+1]) ans++;
		// p1=p2=i;
 		cout<<ans<<endl;
 	}
 	return 0;
 }