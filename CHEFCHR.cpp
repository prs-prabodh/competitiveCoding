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
		int a[26]={0};
		char fi=s[0],se=s[1],th=s[2],fo=s[3];
		a[fi-'a']++;
		a[se-'a']++;
		a[th-'a']++;
		a[fo-'a']++;
		int c=0,p=3;
		while(p<s.length()){
            if(a[2]&&a[4]&&a[5]&&a[7])
                c++;
            a[fi-'a']--;
            fi=se;
            se=th;
            th=fo;
            fo=s[++p];
            a[fo-'a']++;
		}
		//cout<<endl;
		(c>0)?cout<<"lovely "<<c<<endl:cout<<"normal"<<endl;
	}
	return 0;
}
