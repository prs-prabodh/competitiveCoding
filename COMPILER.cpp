/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		char stk[MAX];
		int top=-1,c=0,c1=0,ans=0,flag=0;
		for(int i=0;i<s.length();i++){
            if(s[i]=='<')
                c++;
            else
                c1++;
            if(c1>c){
                //flag=1;
                break;
            }
            if(c==c1){
                ans=i+1;
            }
		}
		cout<<ans<<endl;
	}
	return 0;
}
