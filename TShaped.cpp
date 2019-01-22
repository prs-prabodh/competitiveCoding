/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool check(vector<vector<bool>> v)
{
    if(v[0][1] && v[1][1] && v[2][1] && v[2][2] && v[2][0])
        return true;
    else if(v[0][0] && v[1][0] && v[2][0] && v[1][1] && v[1][2])
        return true;
    else if(v[0][0] && v[0][1] && v[0][2] && v[1][1] && v[2][1])
        return true;
    else if(v[0][2] && v[1][2] && v[2][2] && v[1][1] && v[1][0])
        return true;
    else return false;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        vector<pair<int,int>> arr;
        int minX=INT_MAX, minY=INT_MAX;
        for(int i=0;i<5;i++){
            int x,y;
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
            minX=min(x,minX);
            minY=min(y,minY);
        }
        for(int i=0;i<5;i++){
            arr[i].first-=minX;
            arr[i].second-=minY;
        }
        vector<vector<bool>> mat(3,vector<bool>(3,false));
        for(int i=0;i<5;i++){
            if(arr[i].first>2 || arr[i].second>2)
            continue;
            mat[arr[i].first][arr[i].second]=true;
        }
        check(mat)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
    return 0;
}
