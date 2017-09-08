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
   // cout<<s<<endl;
	int n=s.length();
	int c=0;
	for(int i=0;i<(n-2);i+=3){
        //cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
        if(s[i]!='S')
            c++;
        if(s[i+1]!='O')
            c++;
        if(s[i+2]!='S')
            c++;
	}
	cout<<c<<endl;
	return 0;
}
