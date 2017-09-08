/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int length=s.length();
    for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
	int test;
	cin>>test;
	while(test--){
        string s;
        cin>>s;
        if(check(s)){
            cout<<-1<<endl;
        }
        else{
            int n=s.length();
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]){
                    string a=s;
                    string b=s;
                    a.erase(i,1);
                    b.erase(n-i-1,1);
                    if(check(a)){
                        cout<<i<<endl;
                        break;
                    }
                    else if(check(b)){
                        cout<<n-i-1<<endl;
                        break;
                    }
                    else{
                        cout<<-1<<endl;
                        break;
                    }
                }
            }
        }
	}
	return 0;
}
