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
	while(test--){
		int N;
		cin>>N;
		vector<vector<long long int>> a(N,vector<long long int>(N,0));
		for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                cin>>a[i][j];
		for(int i=0;i<N;i++)
            sort(a[i].begin(),a[i].end());
        long long int sum=a[N-1][N-1],prev=sum;
        int i=N-2,j=N-1,flag=0;
        while(i>-1){
            while(a[i][j]>=prev&&j>-1){
                j--;
            }
            if(j==-1){
                flag=1;
                break;
            }
            sum+=a[i][j];
            prev=a[i][j];
            i--;
            j=N-1;
        }
        if(flag)
            cout<<-1<<endl;
        else cout<<sum<<endl;
	}
	return 0;
}
