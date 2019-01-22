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
    int test;
    cin>>test;
    while(test--){
        int n,k,count=0,rank=0;
        cin>>n>>k;
        stack<int> store;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<n;i++){
            if(rank<=k){
                if(store.size()==0){
                    rank++;
                    store.push(arr[i]);
                }
                if(store.top()!=arr[i]){
                    rank=count+1;
                    store.push(arr[i]);
                }
                if(rank<=k){
                    count++;
                }
                else break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
