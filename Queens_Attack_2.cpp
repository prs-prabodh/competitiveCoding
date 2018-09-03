/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> board;
int counter=0,n;
void attacks(int r, int c, int i, int j)
{
    if(r+i>=0 && r+i<n && c+j>=0 && c+j<n && !board[{r+i,c+j}]){
        counter++;
        board[{r+i,c+j}]=true;
        attacks(r+i,c+j,i,j);
    }
}
int main()
{
    int k,rq,cq;
    cin>>n>>k;
    cin>>rq>>cq;
    rq--;
    cq--;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        board[{x-1,y-1}]=true;
    }
    attacks(rq,cq,1,1);
    attacks(rq,cq,0,1);
    attacks(rq,cq,-1,1);
    attacks(rq,cq,1,0);
    attacks(rq,cq,1,-1);
    attacks(rq,cq,0,-1);
    attacks(rq,cq,-1,-1);
    attacks(rq,cq,-1,0);
    cout<<counter<<endl;
    return 0;
}
