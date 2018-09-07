/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
    LL n,x;
    cin>>n>>x;
    LL arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    LL f[n]={0LL},maxSkills=LLONG_MIN;
    f[0]=arr[0]-x;
    for(int i=1;i<n;i++){
        f[i]=max(f[i-1]+(arr[i]-x),arr[i]-x);
        maxSkills=max(maxSkills,f[i]);
    }
    cout<<max(x,x+maxSkills)<<endl;
    return 0;
}
