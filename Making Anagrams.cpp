/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int f1[26]={0},f2[26]={0};
	for(int i=0;i<max(l1,l2);i++){
        if(i<l1)
            f1[s1[i]-'a']++;
        if(i<l2)
            f2[s2[i]-'a']++;
	}
	int c=0;
	for(int i=0;i<26;i++)
        c+=abs(f1[i]-f2[i]);
    cout<<c<<endl;
	return 0;
}
