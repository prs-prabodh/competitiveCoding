/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int l=s.length(),step,flag=0;
		int frq1[26]={0},frq2[26]={0};
		if(l%2==0)
            step=0;
        else step=1;
		for(int i=0;i<l/2;i++){
            frq1[s[i]-'a']++;
            frq2[s[i+(l/2)+step]-'a']++;
		}
		for(int i=0;i<26;i++){
            if(frq1[i]!=frq2[i]){
                flag=1;
                break;
            }
		}
		if(!flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}
