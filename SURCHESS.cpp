/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
vector<string> orig, str1, str2;
int check(int p, int origErr, int x, int y, int l)
{
    int ans=0;
    if(p==1){
        for(int i=x;i<x+l-1;i++){
            ans+=orig[i][y+l-1]^str1[i][y+l-1];
        }
        for(int i=y;i<y+l;i++){
            ans+=orig[x+l-1][i]^str1[x+l-1][i];
        }
    }
    else{
        for(int i=x;i<x+l-1;i++){
            ans+=orig[i][y+l-1]^str2[i][y+l-1];
        }
        for(int i=y;i<y+l;i++){
            ans+=orig[x+l-1][i]^str2[x+l-1][i];
        }
    }
    return (origErr+ans);
}
int main()
{
    int n,m;
    cin>>n>>m;
    string a="",b="";
    for(int i=0;i<m;i++){
        a+=i%2?'0':'1';
        b+=i%2?'1':'0';
    }
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        orig.push_back(x);
        str1.push_back((i%2)?a:b);
        str2.push_back((i%2)?b:a);
    }
    int minErr[min(n,m)+1]={INT_MAX};
    int errs1[n][m],errs2[n][m];
    memset(errs1,0,n*m*sizeof(int));
    memset(errs2,0,n*m*sizeof(int));
    for(int i=1;i<=min(n,m);i++){
        int minC=INT_MAX;
        for(int x=0;x<=n-i;x++){
            for(int y=0;y<=m-i;y++){
                errs1[x][y]=check(1,errs1[x][y],x,y,i);
                errs2[x][y]=check(2,errs2[x][y],x,y,i);
                minC=min(minC,min(errs1[x][y],errs2[x][y]));
            }
        }
        minErr[i]=minC;
    }
    vector<pair<int,int>> searchSpace;
    for(int i=1;i<=min(n,m);i++)
        searchSpace.push_back(make_pair(minErr[i],i));
    sort(searchSpace.begin(),searchSpace.end());
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int c;
        cin>>c;
        auto ans=lower_bound(searchSpace.begin(),searchSpace.end(),make_pair(c,INT_MIN));
        while((*(ans+1)).first==(*ans).first && (*(ans+1)).second > (*ans).second)
            ans++;
        if((*ans).first!=c)
            ans--;
        cout<<(*ans).second<<endl;
    }
    return 0;
}
