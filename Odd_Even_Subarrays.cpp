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
    int n;
    cin>>n;
    int arr[n],cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=(x%2)?-1:1;
    }
    map<int, int> m;
    m[cnt]=1;
    LL ans=0LL;
    for(int i=0;i<n;i++){
        cnt+=arr[i];
        ans+=m[cnt];
        m[cnt]++;
    }
    cout<<ans<<endl;
    return 0;
}
