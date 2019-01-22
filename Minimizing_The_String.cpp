/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
void print(string s, int index)
{
	for(int i=0;i<s.length();i++)
		if(i!=index) cout<<s[i];
	cout<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	string s;
	int n,index=-1;
	cin>>n>>s;
	for(int i=0;i<n;i++)
		if(s[i]>s[i+1] && i<n-1){
			index=i;
			break;
		}
	index>=0?print(s,index):print(s,n-1);
    return 0;
} 