/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int i;
int m(char c)
{
    if(c=='H')
        return 1;
    else if(c=='C')
        return 12;
    else if(c=='O')
        return 16;
    else return 0;
}
int submass(string s, int x)
{
    int total=0;
    if(s[x]=='('){
        total+=submass(s,x+1);
        x=i;        //to keep track of last scanned element
    }
        while(s[x]!=')'&&x<s.length()){
            if(isdigit(s[x])){
                total+=(m(s[x-1])*(s[x]-'1'));
                //cout<<total<<endl;
            }
            else if(s[x]=='('){
                    total+=submass(s,x+1);
                    //cout<<total<<endl;
                    x=i;
            }
            else{
                total+=m(s[x]);
                //cout<<total<<endl;
            }
            x++;
        }
        i=x;
        if(isdigit(s[i+1])&&i+1<s.length()){
            total*=(s[i+1]-'0');
            i++;
        }
    //cout<<i<<endl;
    //cout<<total<<endl;
    return total;
}
int main()
{
	string s;
	cin>>s;
	int mass=0;
	for(i=0;i<s.length();i++){
        int smass;
        if(s[i]=='('){
            smass=submass(s,i+1);
            mass+=smass;
        }
        else{
            if(isdigit(s[i]))
                mass+=(m(s[i-1])*(s[i]-'1'));
            else
                mass+=m(s[i]);
        }
        //cout<<mass<<endl;
	}
	cout<<mass<<endl;
	return 0;
}
