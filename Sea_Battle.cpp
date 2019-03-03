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
 	int w1,h1,w2,h2;
 	cin>>w1>>h1>>w2>>h2;
 	cout<<2*(w1+h1+w2+h2-w2-2)+8<<endl;
 	return 0;
 }