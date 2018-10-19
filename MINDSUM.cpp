/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
LL sum(LL n)
{
    LL ans=0LL;
    while(n>0){
        ans+=(n%10LL);
        n/=10LL;
    }
    return ans;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        LL n,d;
        cin>>n>>d;
        vector<LL> logger;
        logger.push_back(n);
        LL minNode=n,minDist=0,store;
        for(int i=1;i<=15;i++){
            int size=logger.size();
            for(int j=pow(2,i-1)-1;j<size;j++){
                LL a=sum(logger[j]), b=logger[j]+d;
                if(minNode>a || minNode>b){
                    minNode=min(a,b);
                    if(minNode==a) store=a;
                    else store =b;
                    minDist=i;
                }
                logger.push_back(a);
                logger.push_back(b);
            }
        }
        cout<<minNode<<" "<<minDist<<" "<<store<<endl;
    }
    return 0;
}
