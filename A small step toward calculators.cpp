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
	if(s[1]=='+'){
        cout<<(s[0]-'0')+(s[2]-'0')<<endl;
	}
	else{
        cout<<(s[0]-'0')-(s[2]-'0')<<endl;
	}
	return 0;
}
