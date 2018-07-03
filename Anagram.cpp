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
		string a;
		cin>>a;
		int len=a.length();
		if(a.length()%2!=0)
            cout<<-1<<endl;
        else{
            string x=a.substr(0,a.length()/2);
            string y=a.substr((a.length()/2),a.length()/2);
            int c=0;
            vector<int> s(26,0);
            vector<int> s1(26,0);
            for(int i=0;i<x.length();i++){
                    s[x[i]-'a']++;
                    s1[y[i]-'a']++;
            }
            for(int i=0;i<26;i++)
                c+=abs(s[i]-s1[i]);
            cout<<c/2<<endl;
        }
	}
	return 0;
}
