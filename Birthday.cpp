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
 	int a[n];
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	sort(a,a+n);
 	for(int i=0;i<n;i+=2)
 		cout<<a[i]<<' ';
 	for(int i=n%2?n-2:n-1;i>=0;i-=2)
 		cout<<a[i]<<' ';
 	cout<<endl;
 	return 0;
 }