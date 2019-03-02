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
 	int test=0;
 	cin>>test;
 	while(test--) {
 		int l1,l2,r1,r2;
 		cin>>l1>>r1>>l2>>r2;
 		int a,b;
 		b=a=l1+rand()%(r1-l1+1);
 		while(b==a)
 			b=l2+rand()%(r2-l2+1);
 		cout<<a<<' '<<b<<endl;
 	}
 	return 0;
 }