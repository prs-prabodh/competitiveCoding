/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
string days[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
int calc(string s, int offset)
{
	int index=0;
	while(days[index]!=s) index=(index+1)%7;
	return index=(index+offset)%7;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	
	int test;
	cin>>test;
	while(test--){
		string s,e;
		int l,r,count=0,index=0;
		cin>>s>>e>>l>>r;
		int sDay=calc(s,l-1);
		int reqDay=calc(e,0);
		for(int i=0;i<=r-l+1;i++){
			if(sDay==reqDay) { count++; index=l+i; }
			sDay=(sDay+1)%7;
		}
		if(count==0) cout<<"impossible"<<endl;
		else if(count==1) cout<<index<<endl;
		else cout<<"many"<<endl;
	}
    return 0;
} 