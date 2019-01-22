/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
string print(string s, int i, int j)
{
	string ans="";
	for(int x=i;x<=j;x++) ans+=s[x];
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	string s;
	cin>>n>>s;
	int freq[26],flag=0,finalI=0,finalJ=0;
	for(int i=0;i<n;i++){
		memset(freq,0,26*sizeof(int));
		int maxOcc=INT_MIN;
		for(int j=i;j<n;j++){
			maxOcc=max(maxOcc,++freq[s[j]-'a']);
			if(maxOcc <= (j-i+1)/2){
				flag=1;
				finalI=i;
				finalJ=j;
				break;
			}
		}
		if(flag) break;
	}
	flag?cout<<"YES"<<endl<<print(s,finalI,finalJ)<<endl:cout<<"NO"<<endl;
    return 0;
} 