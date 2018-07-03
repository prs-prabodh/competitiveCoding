/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int push(char stk[], int top, int item)
{
    stk[++top]=item;
    return top;
}
int priority(char c)
{
    if(c=='^')
        return 2;
    else if(c=='/'||c=='*')
        return 1;
    else if(c=='+'||c=='-')
        return 0;
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		char stk[400];
		int top=-1;
		for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                top=push(stk,top,'(');
            }
            else if(s[i]==')'){
                while(stk[top]!='(')
                    cout<<stk[top--];
                top--;
            }
            else if(s[i]>='a'&&s[i]<='z')
                cout<<s[i];
            else{
                if(stk[top]=='(')
                    top=push(stk,top,s[i]);
                else{
                    while(priority(stk[top--])>priority(s[i]))
                        cout<<stk[i];
                    top=push(stk,top,s[i]);
                }
            }
		}
		while(top!=-1)
            cout<<stk[top--];
        cout<<endl;
	}
	return 0;
}
