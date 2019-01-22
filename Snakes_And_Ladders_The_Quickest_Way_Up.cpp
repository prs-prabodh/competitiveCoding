/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        vector<int> dist(101,INT_MAX);
        int n,m;
        vector<vector<int>> routes(101,vector<int>(101,false));
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            routes[x][y]=1;
        }
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            routes[x][y]=1;
        }
        dist[1]=0;
        deque<int> candidates;
        bool visited[101]={false};
        candidates.push_back(1);
        while (!candidates.empty()) {
            int x=candidates.front();
            candidates.pop_front();
            if(visited[x]) continue;
            visited[x]=true;
            for(int i=1;i<101;i++){
                if(routes[x][i]==1){
                    if(dist[i]>dist[x]){
                        dist[i]=dist[x];
                        candidates.push_front(i);
                    }
                    break;
                }
                else if(x<i && x+6>=i && dist[i]>dist[x]+1){
                    dist[i]=dist[x]+1;
                    candidates.push_back(i);
                }
            }
        }
        (visited[100])?cout<<dist[100]<<endl:cout<<-1<<endl;
    }
    return 0;
}
