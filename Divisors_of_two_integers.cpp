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
 	int a[n], maxN=INT_MIN;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 		maxN=max(maxN,a[i]);
 	}
 	cout<<maxN<<' ';
 	set<int> f;
 	for(int i=0;i<n;i++)
 		if(maxN%a[i]==0 && f.find(a[i])==f.end()){
 			f.insert(a[i]);
 			a[i]=-1;
 		}

 			
 	maxN=INT_MIN;
 	for(int i=0;i<n;i++)
 		maxN=max(maxN,a[i]);
 	cout<<maxN<<endl;
 	return 0;
 }