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
	long long int j=0LL;
	while(s[0]!='-'){
        j++;
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'){
                stk.push('{');
            }
            else{
                if(!stk.empty()&&stk.top()=='{'){
                    stk.pop();
                }
                else{
                    stk.push('}');
                }
            }
        }
        int c=0;
        bool char2=0;
        while(!stk.empty()){
            if(stk.top()=='{'){
                if(char2){
                    stk.pop();
                    char2=0;
                }
                else{
                    stk.pop();
                    c++;
                    char2=1;
                }
            }
            else if(char2){
                stk.pop();
                c++;
                char2=0;
            }
            else{
                stk.pop();
                char2=1;
            }
        }
        cout<<j<<". "<<c<<endl;
        cin>>s;
	}
	return 0;
}
