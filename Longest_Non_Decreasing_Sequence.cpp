/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int ins(vector<int> &a, vector<int> &b, int x, int flag)
{
    int size = lower_bound(a.begin(),a.end(),abs(x)) - a.begin()+1;
    // cout<<"size : "<<size<<' '<<flag<<endl;
    if(flag && size>1 && b[size-2]*x>0){
        return a.size();
    }
    vector<int> t,t1;
    for(int i=0;i<size-1;i++){
        t.push_back(a[i]);
        t1.push_back(b[i]);
    }
    t.push_back(abs(x));
    t1.push_back(x);
    a=t;
    b=t1;
    return size;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> pos, alt, altActual, dummy;
    if(arr[0]>0)
    pos.push_back(arr[0]);
    alt.push_back(abs(arr[0]));
    altActual.push_back(arr[0]);
    vector<int> maxL(2,1);
    for(int i=1;i<n;i++){
        if(arr[i]>0){
            maxL[0]=max(maxL[0],ins(pos,dummy=pos,arr[i],0));
        }
        maxL[1]=max(maxL[1],ins(alt,altActual,arr[i],1));
        // for(int i=0;i<pos.size();i++)
        // cout<<pos[i]<<' ';
        // cout<<endl;
        // for(int i=0;i<altActual.size();i++)
        // cout<<altActual[i]<<' ';
        // cout<<endl;
    }
    cout<<max(maxL[0],maxL[1])<<endl;
    return 0;
}
