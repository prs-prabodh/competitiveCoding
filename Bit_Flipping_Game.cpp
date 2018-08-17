/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define N 1000000
using namespace std;
bool record[N]={false};
int main()
{
	int test,cnt=0;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
            if(s[i]=='1' && !record[i]){
                record[i]=true;
                cnt++;
            }
		}
	}
	(cnt%2)?cout<<'A'<<endl:cout<<'B'<<endl;
	cout<<cnt<<endl;
	return 0;
}
