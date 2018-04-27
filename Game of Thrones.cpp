/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f[26]={0};
	int flag=0;
	for(int i=0;i<s.length();i++)
        f[s[i]-'a']++;
    for(int i=0;i<26;i++)
        if(f[i]%2!=0){
            if(flag){
                cout<<"NO"<<endl;
                return 0;
            }
            flag=1;
        }
    cout<<"YES"<<endl;
	return 0;
}
