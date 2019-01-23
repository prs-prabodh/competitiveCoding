/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
 
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int indexRes(int x)
{
    return x+1000;
}
int indexResI(int x)
{
    return x+2000;
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long freq[2002]={0};
        bool indexed[4002]={false};
        long long ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(freq[indexRes(x)]==0)
                freq[indexRes(x)]=1;
            else
                freq[indexRes(x)]++;
            indexed[indexResI(2*x)]=true;
        }       
        for(int i=-1000;i<1001;i++){
            if(freq[indexRes(i)]>0){
                for(int j=i;j<1001;j++){
                    if(freq[indexRes(j)]>0&&indexed[indexResI(i+j)]){
                        if(i==j&&freq[indexRes(i)]==1)
                            continue;
                        long long x=0;
                        if(i==j){
                            x=freq[indexRes(i)];
                            ans+=(x*(x-1))/2;
                        }
                        else{
                            x=freq[indexRes(i)]+freq[indexRes(j)];
                            ans+=(x*(x-1))/2;
                            ans-=((freq[indexRes(i)]*(freq[indexRes(i)]-1))/2+(freq[indexRes(j)]*(freq[indexRes(j)]-1))/2);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
