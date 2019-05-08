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
 	int n, t, digits = 1, required = 0;
 	cin>>n>>t;
 	if(t == 10)
 		digits++;
 	if(n < digits){
 		cout<<-1<<endl;
 		return 0;
 	}
 	required = n - digits;
 	cout<<t;
 	while(required--) cout<<0;
 	cout<<endl;
 	return 0;
 }