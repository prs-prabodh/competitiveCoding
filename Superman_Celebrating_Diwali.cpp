/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int **data,**optVal,*maxAtH,H,N,I;
void livesSaved()
{
    for(int floor=0;floor<H;floor++){
        maxAtH[floor]=0;
        for(int building=0;building<N;building++){
            optVal[floor][building]=data[floor][building];;
            if(floor>=I && N!=1){
                optVal[floor][building]+=max(optVal[floor-1][building],maxAtH[floor-I]);
            }
            else if(floor>0){
                optVal[floor][building]+=optVal[floor-1][building];
            }
            maxAtH[floor]=max(maxAtH[floor],optVal[floor][building]);
        }
    }
}
int main()
{
	cin>>N>>H>>I;
	data= new int*[H];
	optVal= new int*[H];
	for(int i=0;i<H;i++){
        data[i]=new int[N];
        optVal[i]=new int[N];
	}
	maxAtH=new int[H];
	for(int i=0;i<H;i++){
        memset(data[i],0,sizeof(int)*N);
        memset(optVal[i],0,sizeof(int)*N);
	}
	for(int i=0;i<N;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            int index;
            cin>>index;
            data[index-1][i]++;
        }
	}
	livesSaved();
	int ans=INT_MIN;
	for(int i=0;i<N;i++){
        ans=max(ans,optVal[H-1][i]);
	}
	cout<<ans<<endl;
	return 0;
}
