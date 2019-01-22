/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
bool *visited;
long long vertices,num=0;
vector<int> *links;
vector<long long> subGraphs;
void dfs(int node)
{
    visited[node]=true;
    vertices++;
    for(int i=0;i<links[node].size();i++){
        if(!visited[links[node][i]]){
            dfs(links[node][i]);
        }
    }
}
int main()
{
    long long n,p;
    cin>>n>>p;
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    links=new vector<int> [n];
    while(p--){
        int x,y;
        cin>>x>>y;
        links[x].push_back(y);
        links[y].push_back(x);
    }
    visited=new bool[n];
    memset(visited,false,n*sizeof(bool));
    for(int i=0;i<n;i++){
        if(!visited[n]){
            vertices=0;
            dfs(i);
            subGraphs.push_back(vertices);
            num++;
        }
    }
    long long ans=n*(n-1)/2;
    long long ansAdjust=0;
    for(int i=0;i<num;i++){
        ansAdjust+=subGraphs[i]*(subGraphs[i]-1)/2;
    }
    ans-=ansAdjust;
    cout<<ans<<endl;
    return 0;
}
