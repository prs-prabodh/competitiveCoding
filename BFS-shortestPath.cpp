/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int bfs(int s, vector<vector<int>> adj, vector<bool> visited, vector<int> dist)
{
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0;i<adj[x].size();i++){
            if(!visited[adj[x][i]]){
                dist[adj[x][i]]=dist[x]+6;
                visited[adj[x][i]]=true;
                q.push(adj[x][i]);
            }
        }
    }
    for(int i=0;i<dist.size();i++)
        if(i!=s)
            cout<<dist[i]<<' ';
    cout<<endl;
    return 0;
}
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,m;
        cin>>n>>m;
        vector<bool> visited(n,false);
        vector<vector<int>> adj(n,vector<int>());
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
        }
        int s;
        cin>>s;
        vector<int> dist(n,-1);
        dist[s-1]=0;
        bfs(s-1,adj,visited,dist);
    }
    return 0;
}
