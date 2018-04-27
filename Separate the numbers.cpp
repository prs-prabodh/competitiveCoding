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
		int len=s.length();
		int div=1;
		while(div<=len/2){
            int mark=0;
            int step=0,step1=0,flag=0;
            while(mark+div<len-1){
                flag=0;
                int first=0,second=0;
                if(s[mark]=='0'&&div>1)
                    break;
                for(int i=mark;i<mark+div+step;i++){
                    first=(first*10)+(s[i]-'0');
                }
                if(first+1==(int)pow(10,div))
                    step=1;
                //cout<<step<<endl;
                mark=mark+div+step1;
                if(s[mark]=='0')
                    break;
                for(int i=mark;i<mark+div+step;i++){
                    second=(second*10)+(s[i]-'0');
                }
                //cout<<first<<" "<<second<<endl;
                if(first+1==second){
                    if(step==1)
                        step1=1;
                    flag=1;
                    continue;
                }
                else break;
            }
            if(flag==1){
                cout<<"YES ";
                for(int i=0;i<div;i++)
                    cout<<s[i];
                cout<<endl;
                break;
            }
            div++;
		}
		if(div>len/2)
            cout<<"NO"<<endl;
	}
	return 0;
}
