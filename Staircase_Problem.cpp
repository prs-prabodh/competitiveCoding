/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;

	//Number of steps that could be possibly skipped
	int X[] = {1, 2, 3, 4, 5};
	while(test--){
		long long n;
		cin>>n;
		long long dp[n+1];
		memset(dp,0LL,sizeof(dp));
		dp[0]=1LL;
		for(int i=1;i<n+1;i++){
            for(int j : X){
                if(i-j>=0){
                    dp[i]+=dp[i-j];
                }
            }
		}
		cout<<"No. of ways : "<<dp[n]<<endl;
	}
	return 0;
}
