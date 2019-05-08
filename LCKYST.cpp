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
 	int n;
 	cin>>n;	
 	for(int i=0;i<n;i++){
 		ll x, xcopy, cnt5=0LL, cnt2=0LL; 
 		cin>>x;
 		xcopy = x;
 		while(xcopy%5 == 0 && xcopy > 1){
 			cnt5++;
 			xcopy /= 5;
 		}
 		while(xcopy%2 == 0 && xcopy > 1){
 			// cout<<"Exec"<<endl;
 			cnt2++;
 			xcopy /= 2;
 		}
 		ll fours = ceil(max(0LL, cnt5-cnt2)/2.00);
 		// cout<<fours<<' '<<cnt2<<' '<<cnt5<<endl;
 		// x*=pow(4,fours);
 		cout<<(long long)(x*pow(4,fours))<<endl;
 	}
 	return 0;
 }