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
		string s,copy;
		cin>>s;
		copy=s;
		reverse(copy.begin(),copy.end());
		int flag=0;
		for(int i=0;i<s.length()-1;i++){
            if(abs(s[i]-s[i+1])!=abs(copy[i]-copy[i+1])){
                flag=1;
                break;
            }
		}
		if(!flag)
            cout<<"Funny"<<endl;
        else cout<<"Not Funny"<<endl;
	}
	return 0;
}
