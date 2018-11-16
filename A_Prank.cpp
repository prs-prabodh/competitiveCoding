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
	int n,curr=0,start=0,end=0,maxLen=0,tempEnd,tempStart;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i+1]==a[i]+1){
			curr=1;
			tempStart=i;
			while(a[i+1]==a[i]+1){
				curr++;
				i++;
			}
			tempEnd=i;
			if(start==0 && end>0 && a[start]==1){
				if(tempEnd!=n-1){
					if(curr-1>=maxLen){
						maxLen=curr;
						start=tempStart;
						end=tempEnd;
					}
				}
				else if(a[tempEnd]==1000 && maxLen<=curr){
					maxLen=curr;
					start=tempStart;
					end=tempEnd;
				}
				else if(curr-1>=maxLen){
					maxLen=curr;
					start=tempStart;
					end=tempEnd;
				}
			}
			else if(maxLen<=curr){
				maxLen=curr;
				start=tempStart;
				end=tempEnd;
			}
		}
	}
	maxLen=max(-1,end-start-1);
	if(end==n-1 && a[end]==1000 && maxLen>=0) maxLen++;
	if(start==0 && a[start]==1 && maxLen>=0) maxLen++;
	cout<<max(0,maxLen)<<endl;
    return 0;
} 