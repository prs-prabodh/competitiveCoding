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
	int c=0;
	int n=s.length();
	for(int i=0;i<n;i++){
        if(s[i]>64&&s[i]<91){
            c++;
        }
	}
	cout<<c+1<<endl;
	return 0;
}
