/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int startRow=-1,endRow=-1,startCol=-1,endCol=-1;
	string x;
	for(int i=0;i<n;i++){
        cin>>x;
        if(endRow!=-1)
            continue;
        if(startRow!=-1){
            int flag=0,j=0;
            while(j<m){
                if(x[j]=='B'){
                    flag=1;
                    break;
                }
                j++;
            }
            if(!flag){
                endRow=i-1;
            }
            continue;
        }
        for(int j=0;j<m;j++){
            if(x[j]=='B'){
                startRow=i;
                startCol=j;
                while(x[j]!='W'&& j<m){
                    j++;
                }
                endCol=j-1;
            }
        }
	}
	if(endRow<0){
        endRow=n-1;
	}
//	cout<<startRow<<' '<<endRow<<' '<<startCol<<' '<<endCol<<endl;
	cout<<startRow+1+(endRow-startRow)/2<<' '<<startCol+1+(endCol-startCol)/2<<endl;
	return 0;
}
