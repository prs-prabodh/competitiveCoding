/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	const int N = 2e5+1;
	int n;
	cin>>n;
	int a[n],b[n];
	bool presentInStack[N];
	for(int i=0;i<n;i++){ 
		cin>>a[i]; 
		presentInStack[a[i]]=1; 
	}
	for(int i=0;i<n;i++) cin>>b[i];
	int top=0,count=0;
	for(int i=0;i<n;i++){
		if(presentInStack[b[i]]){
			while(a[top]!=b[i]){
				presentInStack[a[top]]=0;
				top++;
				count++;
			}
			presentInStack[a[top]]=0;
			top++;
			count++;
		}
		cout<<count<<' ';
		count=0;
	}
    return 0;
} 