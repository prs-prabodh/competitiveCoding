/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int c,n,minNum,maxNum;
vector<int> arr;
bool check(int x)
{
    int cows=c-1,prev=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-prev>=x){
            cows--;
            if(!cows)
                return true;
            prev=arr[i];
        }
    }
    return false;
}
int BS(int l, int r)
{
    int ans=0;
    if(l>r)
        return ans;
    int m=l+(r-l)/2;
    if(check(m)){
        ans=m;
        l=m+1;
        ans=max(ans,BS(l,r));
    }
    else{
        r=m-1;
        ans=max(ans,BS(l,r));
    }
    return ans;
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		cin>>n>>c;
		arr.clear();
		for(int i=0;i<n;i++){
		    int x;
            cin>>x;
            arr.push_back(x);
		}
        sort(arr.begin(),arr.end());
        minNum=arr[0];
        maxNum=arr[n-1];
        int l=0,r=maxNum;
        cout<<BS(l,r)<<endl;
	}
	return 0;
}
