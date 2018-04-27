/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int n;
bool **dp;
vector<int> p;
void display(vector<int> p)
{
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void gen(int a[], int x, int s, vector<int> p)
{
    if(s==0){
        display(p);
        p.clear();
        return;
    }
    if(x==0 && s==a[0] && dp[0][a[0]]){
        p.push_back(a[0]);
        display(p);
        p.clear();
        return;
    }
    if(dp[x-1][s]){
        vector<int> b=p;
        gen(a,x-1,s,b);
    }
    if(s>=a[x]&&dp[x-1][s-a[x]]){
        p.push_back(a[x]);
        gen(a,x-1,s-a[x],p);
    }
}
void subset(int a[], int s)
{
    dp=new bool*[n];
    for(int i=0;i<n;i++){
        dp[i]=new bool[s+1];
        dp[i][0]=true;
    }
    for(int i=0;i<s+1;i++){
        if(i<=a[0])
            dp[0][i]=true;
        else
            dp[0][i]=false;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=s;j++){
            if(a[i]<=j){
                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n-1][s]==false){
        cout<<"No possible subsets\n";
    }
    else{
        //cout<<"here"<<endl;
        cout<<"Possible subsets whose sum is "<<s<<" are\n";
        gen(a,n-1,s,p);
    }
}
int main()
{
	cout<<"Size of set - ";
	cin>>n;
	int a[n];
	cout<<"Elements - ";
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	int sum;
	cout<<"Required Sum - ";
	cin>>sum;
	//bool dp[n][sum];
	subset(a,sum);
	return 0;
}
