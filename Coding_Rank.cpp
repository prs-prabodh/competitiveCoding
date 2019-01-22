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
    int n,x;
    cin>>n>>x;
    set<int> arr;
    for(int i=0;i<n-1;i++){
        int in;
        cin>>in;
        arr.insert(in);
    }
    int rank=1;
    for(auto i = arr.rbegin();i!=arr.rend();i++){
        if(x < *i){
            rank++;
        }
        else{
            break;
        }
    }
    (rank<=10)?cout<<"Happy":cout<<"Not Happy"<<endl;
    return 0;
}
