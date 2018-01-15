/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
vector<string> store;
bool comp(string a, string b)
{
    int len=min(a.length(),b.length());
    for(int i=0;i<len;i++){
        if(a[i]>b[i])
            return true;
        else if(a[i]<b[i])
            return false;
    }
    if(a.length()>b.length())
        return true;
    else return false;
}
void sortFunc()
{
    for(int i=0;i<store.size();i++){
        for(int j=i+1;j<store.size();j++){
            if(comp(store[i],store[j])){
                string t=store[i];
                store[i]=store[j];
                store[j]=t;
            }
        }
    }
}
int main()
{
	//cout<<comp("ac","c");
	string s;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++){
        for(int j=1;j<=l-i;j++){
            char t[j+1];
            string n;
            for(int k=0;k<j;k++){
                 t[k]=s[i+k];
            }
            t[j]='\0';
            n=t;
            store.push_back(n);
        }
	}
	sortFunc();
	string ans=store[0];
	for(int i=1;i<store.size();i++)
        ans+=store[i];
    int g=0;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int p,m;
        cin>>p>>m;
        int result=((p%m)*(g%m))%m+1;
        //cout<<result<<endl;
        cout<<ans[result-1]<<endl;
        g+=(int)ans[result-1];
        //cout<<g<<endl;
    }
	return 0;
}
