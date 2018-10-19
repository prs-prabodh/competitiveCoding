/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
LL n,m,*a,*b,*c,maxSearchCost=LLONG_MIN;
bool possible(LL mid)
{
    LL balloons=m;
    for(int i=0;i<n;i++){
        LL required,diff=max(0LL,c[i]-mid);
        required=(LL)ceil((long double)diff/b[i]);
        // cout<<diff<<" "<<required<<" "<<balloons<<endl;
        if(required>balloons)
            return false;
        balloons-=required;
    }
    return true;
}
int main()
{
    cin>>n>>m;
    a=new LL[n];
    b=new LL[n];
    c=new LL[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[i]=a[i]*b[i];
        maxSearchCost=max(maxSearchCost,c[i]);
    }
    LL l=0,r=maxSearchCost,lastValid=r,mid;
    // cout<<l<<' '<<r<<endl;
    while(l<=r){
        mid=l+(r-l)/2LL;
        // cout<<mid;
        if(possible(mid)){
            r=mid-1;
            lastValid=mid;
        }
        else l=mid+1;
    }
    cout<<lastValid<<endl;
    return 0;
}
