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
		string s1,s2;
		cin>>s1>>s2;
		int l1=s1.length(),l2=s2.length(),f1[26]={0},f2[26]={0},flag=0;
		for(int i=0;i<max(l1,l2);i++){
            if(i<l1)
                f1[s1[i]-'a']++;
            if(i<l2)
                f2[s2[i]-'a']++;
		}
		for(int i=0;i<26;i++)
            if(f1[i]>0&&f2[i]>0){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        if(!flag)
            cout<<"NO"<<endl;
	}
	return 0;
}
