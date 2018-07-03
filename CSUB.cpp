/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		long long int count=0;
		for(long long int i=0;i<n;i++){
			if(s[i]=='1'){
				count++;
			}
		}
		cout<<((count)*(count+1))/2<<endl;
	}
	return 0;
}
