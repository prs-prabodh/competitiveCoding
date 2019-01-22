/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
vector<string> arr;
char **forged;
void verifyAndChange(int i, int j)
{
    bool goAhead = true;
    for(int a=i;a<i+3;a++){
        for(int b=j;b<j+3;b++){
            if(arr[a][b]=='.' && (a-i!=1 || b-j!=1)){
                goAhead=false;
            }
        }
    }
    if(goAhead){
        for(int a=i;a<i+3;a++){
            for(int b=j;b<j+3;b++){
                if(a-i!=1 || b-j!=1){
                    forged[a][b]='#';
                }
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    arr.resize(n);
    forged=new char*[n];
    for(int i=0;i<n;i++){
        forged[i]=new char[m];
        memset(forged[i],'.',m*sizeof(forged[0][0]));
    }
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<=n-3;i++){
        for(int j=0;j<=m-3;j++){
            for(int k=i;k<i+3;k++){
                verifyAndChange(i,j);
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++)
    //     cout<<forged[i][j];
    //     cout<<endl;
    // }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='#' && forged[i][j]=='.'){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout<<"YES"<<endl;
    return 0;
}
