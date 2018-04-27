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
        fflush(stdin);
		char s[25];
		cin.getline(s,25);
		int g=0,b=0;
		for(int i=0;s[i]!='\0';i++){
            if(s[i]=='g'||s[i]=='G')
                g++;
            if(s[i]=='b'||s[i]=='B')
                b++;
		}
		if(g<b)
            cout<<s<<" is A BADDY"<<endl;
        else if(g==b)
            cout<<s<<" is NEUTRAL"<<endl;
        else cout<<s<<" is GOOD"<<endl;
	}
	return 0;
}
