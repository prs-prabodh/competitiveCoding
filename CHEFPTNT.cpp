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
            int n,m,x,k;
            cin>>n>>m>>x>>k;
            string s;
            cin>>s;
            int e=0,o=0,p=1,sum=0;
            if(x==0){
                cout<<"no"<<endl;
                continue;
            }
            if(n/(min(x,k))<=m&&n<=k){
                for(int i=0;i<s.length();i++){
                    if(s[i]=='E')
                        e++;
                    else o++;
                }
                int req=min(x,k);
                while(p<=m&&sum<n){
                    int red=min(req,(n-sum));
                    if(p%2){
                        if(o>0)
                            red=min(o,red);
                        if(o>=red){
                            sum+=red;
                            o-=red;
                        }
                        p++;
                    }
                    else{
                        if(e>0)
                            red=min(e,red);
                        if(e>=red){
                            sum+=red;
                            e-=red;
                        }
                        p++;
                    }
                }
            }
            else{
                cout<<"no"<<endl;
                continue;
            }
            if(sum>=n)
                cout<<"yes"<<endl;
            else cout<<"no"<<endl;
	}
	return 0;
}
