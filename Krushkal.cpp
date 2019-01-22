/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int root(vector<int> id, int x)
{
    while(id[x]!=x){
        id[x]=id[id[x]];
        x=id[x];
    }
    return x;
}
vector<int> unn(vector<int> id, int x, int y)
{
    int p=root(id, x);
    int q=root(id, y);
    id[q]=id[p];
    return id;
}
int main()
{
    int nodes, edges;
    long long cost=0LL;
    cin>>nodes>>edges;
    vector<int> id(nodes);
    for(int i=0;i<nodes;i++){
        id[i]=i;
    }
    vector<pair<long long, pair<int, int>>> paths(edges);
    for(int i=0;i<edges;i++){
        int from,to;
        long long wt;
        cin>>from>>to>>wt;
        paths[i].second.first=--from;
        paths[i].second.second=--to;
        paths[i].first=wt;
    }
    sort(paths.begin(),paths.end());
    for(int i=0;i<edges;i++){
        int from, to;
        long long wt;
        from=paths[i].second.first;
        to=paths[i].second.second;
        wt=paths[i].first;
        if(root(id,from)!=root(id,to)){
            cost+=wt;
            id=unn(id,from,to);
        }
    }
    cout<<cost<<endl;
    return 0;
}
