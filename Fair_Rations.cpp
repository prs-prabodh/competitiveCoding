/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int fairRations(vector<int> arr)
{
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<n;){
        if(arr[i]%2){
            int c=0;
            while(++i && i<=n-1 && arr[i]%2!=1){
                c++;
            }
            if(i>=n-1){
                cout<<"NO"<<endl;
                return -1;
            }
            cnt+=2*(c+1);
        }
        i++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=fairRations(arr);
    if(ans>=0) cout<<ans<<endl;
    return 0;
}
