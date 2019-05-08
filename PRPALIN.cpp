/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;
 
 bool primePalin(int n) {
 	for(int i=2;i<=sqrt(n);i++)
 		if(n%i == 0)
 			return false;
 	string num = to_string(n);
 	int len = num.length();
 	for(int i=0, j=len-1 ; i<len/2 ; i++, j--)
 		if(num[i] != num[j])
 			return false;
 	return true;
 }

 int main() {
 	int n;
 	cin>>n;
 	while(!primePalin(n))
 		n++;
 	cout<<n<<endl;
 	return 0;
 }