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
    int test,c=0;
    cin>>test;
    while(test--){
        int n;
        c++;
        cin>>n;
        string a,b;
        cin>>a>>b;
        map<vector<int>, bool> m;
        for(int i=0;i<n;i++){
            vector<int> newV(26,0);
            for(int j=i;j<n;j++){
                newV[b[j]-'A']++;
                m[newV]=true;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            vector<int> newV(26,0);
            for(int j =i;j<n;j++){
                newV[a[j]-'A']++;
                if(m[newV])
                    cnt++;
            }
        }
        cout<<"Case #"<<c<<": "<<cnt<<endl;
    }
    return 0;
}
