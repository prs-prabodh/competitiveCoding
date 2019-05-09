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
 		int n,x,s;
 		cin>>n>>x>>s;
 		int box=x;
 		for(int i=0;i<s;i++){
 			int a,b;
 			cin>>a>>b;
 			if(box==a || box==b){
 				if(box==a)
 					box=b;
 				else box=a;
 			}
 		}
 		cout<<box<<endl;
 	}
 	return 0;
 }