#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<n+1;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=1;i<n+1;i+=2){
                if(i==n-2){
                    cout<<i+1<<" "<<i+2<<" "<<i<<endl;
                    break;
                }
                else
                    cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
    }
}
