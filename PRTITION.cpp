/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> selected;
int main()
{
	int test;
	cin>>test;
	while(test--){
		selected.clear();
		long long int x,n;
		cin>>x>>n;
		long long int reqS=(n*(n+1)/2)-x;
		//cout<<reqS<<endl;
		if(reqS%2!=0||n<=3)
            cout<<"impossible"<<endl;
        else{
            reqS/=2;
            char s[n]={'.'};
            s[x-1]='2';
            long long int j=(x==n)?n-1:n;
            long long int sum=0;
            while(sum<reqS){
                int cand=min(reqS-sum,j);
                if(cand==x){
                    if(cand!=2&&cand!=1){
                        j=cand-1;
                        continue;
                    }
                    j=n-1;
                    sum=0;
                    selected.clear();
                    continue;
                }
                sum+=cand;
                selected.push_back(cand);
                j=cand-1;
            }
            if(1){
                for(int i=0;i<selected.size();i++)
                    s[selected[i]-1]='1';
                s[x-1]='2';
                for(int i=0;i<n;i++)
                    if(s[i]!='1'&&s[i]!='2')
                        s[i]='0';
                        //int sum1=0;
                for(int i=0;i<n;i++){
                    cout<<s[i];
                }
                cout<<endl;//<<"Total "<<sum1<<" Required - "<<reqS<<endl;;
            }
        }
	}
	return 0;
}
