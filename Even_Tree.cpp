/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
using namespace std;
int dfs(bool marked[], vector<vector<int>> adj, int count, int p, int x)
{
    marked[x]={true};
    for(int i=0;i<adj[x].size();i++){
        if(adj[x][i]!=p&&!marked[adj[x][i]]){
            count++;
            count=dfs(marked,adj,count,p,adj[x][i]);
        }
    }
    return count;
}
int root(vector<int> idx, int x)
{
    while(idx[x]!=x){
        idx[x]=idx[idx[x]];
        x=idx[x];
    }
    return x;
}
void unn(vector<int>& idx, int x, int y)
{
    int p=root(idx,x);
    int q=root(idx,y);
    idx[q]=idx[p];
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    vector<int> idx(nodes);
    vector<vector<int>> adj(nodes);
    vector<pair<int,int>> edge(edges);
    for(int i=0;idx[i]=i&&i<nodes;i++);
    int sizes[edges]={0};
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        edge[i]=make_pair(x-1,y-1);
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
        unn(idx,x-1,y-1);
    }
    // cout<<edge[1].first<<' '<<edge[1].second<<endl;
    for(int i=0;i<edges;i++){
        int x, y;
        tie(x,y)=edge[i];
        // cout<<x<<' '<<y<<endl;
        bool marked[nodes]={false};
        int size1=dfs(marked,adj,1,x,y);
        memset(marked,false,sizeof(marked));
        int size2=dfs(marked,adj,1,y,x);
        sizes[i]=min(size1,size2);
    }
    sort(sizes,sizes+edges);
    int count=0;
    for(int i=0;i<edges;i++){
        if(sizes[i]%2==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
