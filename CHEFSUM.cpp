#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++){
        int n,m=std::numeric_limits<int>::max(),index=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<m)
                m=x,index=i;
        }
        cout<<index+1<<endl;
    }
}
