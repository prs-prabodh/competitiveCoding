/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
void bfs(int i, int v, vector<int> *adj)
{
    bool visited[v]={false};
    visited[i]=true;
    deque<int> q;
    q.push_back(i);
    while(!q.empty()){
        i=q.front();
        cout<<i<<" ";
        q.pop_front();
        for(auto j=adj[i].begin();j!=adj[i].end();j++){
            if(!visited[*j]){
                visited[*j]=true;
                q.push_back(*j);
            }
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
	cout<<"Enter the endpoints of the edges"<<endl;
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
	bfs(s,v,adj);
	return 0;
}
