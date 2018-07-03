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
		set<char> a;
		for(int i=0;i<s.length();i++){
            a.insert(s[i]);
		}
		if(a.size()!=s.length())
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
	return 0;
}
