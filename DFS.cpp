/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int v, vector<int> *adj, bool*visited)
{
    visited[i]=true;
    cout<<i<<" ";
    for(auto j=adj[i].begin();j!=adj[i].end();j++){
        if(!visited[*j]){
            dfs(*j,v,adj,visited);
        }
    }
}
int main()
{
	int v;
	cout<<"Enter the number of vertices"<<endl;
	cin>>v;
	vector<int> *adj;
	adj=new vector<int>[v];
	char ch='y';
	cout<<"Enter the edges"<<endl;
	while(ch=='y'||ch=='Y'){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        cout<<"More edges? (y/n)"<<endl;
        cin>>ch;
	}
	cout<<"Enter the source for traversal"<<endl;
	int s;
	cin>>s;
	bool visited[v]={false};
	dfs(s,v,adj,visited);
	return 0;
}
