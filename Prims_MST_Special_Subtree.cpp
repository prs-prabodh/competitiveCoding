/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
using namespace std;
int main()
{
	int nodes, edges;
	cin>>nodes>>edges;
	vector<pair<int,int>> edge[edges];
    for(int i=0;i<edges;i++){
        int x,y,r;
        cin>>x>>y>>r;
        edge[x-1].push_back(make_pair(y-1,r));
        edge[y-1].push_back(make_pair(x-1,r));
    }
    //cout<<edge[0].size();
    int startingNode;
    cin>>startingNode;
    int minCost=0;
    vector<bool> marked(nodes, false);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
    Q.push(make_pair(0,startingNode-1));
    while(!Q.empty()){
        pair<int,int> x=Q.top();
        Q.pop();
        if(marked[x.second]) continue;
        marked[x.second]=1;
        minCost+=x.first;
        for(int i=0;i<edge[x.second].size();i++){
            if(!marked[edge[x.second][i].first]){
                Q.push(make_pair(edge[x.second][i].second,edge[x.second][i].first));
            }
        }
    }
    cout<<minCost<<endl;
	return 0;
}
