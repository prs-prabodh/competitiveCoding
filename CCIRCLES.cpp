/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
double dist(int x1, int y1, int x2, int y2)
{
    return sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
}
double findMin(int x1, int y1, int r1, pair<pair<int,int>,int> p)
{
    int x2=p.first.first;
    int y2=p.first.second;
    int r2=p.second;
    double minDist=0.0;
    double centDist=dist(x1,y1,x2,y2);
    // cout<<centDist<<endl;
    if(centDist<=(max(r1,r2)-min(r1,r2))){
        // cout<<"1"<<endl;
        minDist=(double)max(r1,r2)-(centDist+(double)min(r1,r2));
    }
    else if(centDist>=r1+r2){
        // cout<<"2"<<endl;
        minDist=centDist-(double)(r1+r2);
    }
    return minDist;
}
double findMax(int x1, int y1, int r1, pair<pair<int,int>,int> p)
{
    int x2=p.first.first;
    int y2=p.first.second;
    int r2=p.second;
    double maxDist=0.00;
    double centDist=dist(x1,y1,x2,y2);
    maxDist = centDist + (double)(r1+r2);
    return maxDist;
}
int main()
{
    int n,q;
    cin>>n>>q;
    vector < pair < pair < int , int > , int > > data;
    vector<double> minD, maxD;
    for(int i=0;i<n;i++){
        int x,y,r;
        cin>>x>>y>>r;
        data.push_back(make_pair(make_pair(x,y),r));
        if(i>0){
            for(int j=0;j<i;j++){
                minD.push_back(findMin(x,y,r,data[j]));
                maxD.push_back(findMax(x,y,r,data[j]));
            }
        }
    }
    sort(minD.begin(),minD.end());
    sort(maxD.begin(),maxD.end());
    // for(int i=0;i<minD.size();i++)
    //     cout<<minD[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<maxD.size();i++)
    //     cout<<maxD[i]<<" ";
    for(int i=0;i<q;i++){
        double k;
        cin>>k;
        auto r=upper_bound(minD.begin(),minD.end(),k);  //all elements left of this
        if(*r!=k) r--;
        auto l=lower_bound(maxD.begin(),maxD.end(),k);  //all elements right of this
        if(r==minD.end() && l==maxD.end()){
            cout<<0<<endl;
            continue;
        }
        // cout<<"Limits : "<<(r-minD.begin())<<" "<<(l-maxD.begin())<<endl;
        cout<<max(minD.begin()-minD.begin(),(r-minD.begin())-(l-maxD.begin())+1)<<endl;
    }
    return 0;
}
