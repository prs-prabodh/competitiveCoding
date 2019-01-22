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
        int n;
        cin>>n;
        int x;
        set<int> nums;
        map<int,vector<int> > occ;
        for(int i=0;i<n;i++){
            cin>>x;
            nums.insert(x);
            occ[x].push_back(i+1);
        }
        int flag=0;
        for(auto i : nums){
            // cout<<i<<endl;
            int f=0;
            for(auto j:occ[i]){
                if(occ.count(j)) f++;
            }
            if(f>=2 && !flag){
                cout<<"Truly Happy"<<endl;
                flag=1;
            }
        }
        if(!flag) cout<<"Poor Chef"<<endl;
    }
    return 0;
}
