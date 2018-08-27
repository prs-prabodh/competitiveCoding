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
		int n,m,flag=0;
		cin>>n>>m;
		string ans="FINE";
		for(int i=0;i<n;i++){
            string type,results;
            cin>>type>>results;
            if(flag==1){
                continue;
            }
            if(type=="correct"){
                for(int j=0;j<m;j++){
                    if(results[j]=='0'){
                        ans="INVALID";
                        flag=1;
                    }
                }
            }
            else{
                int insideFlag=1;
                for(int j=0;j<m;j++){
                    insideFlag&=(results[j]-'0');
                }
                if(insideFlag){
                    ans="WEAK";
                    flag=2;
                }
            }
		}
		cout<<ans<<endl;
	}
	return 0;
}
