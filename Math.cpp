<<<<<<< HEAD
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n,maxN=0;
    cin>>n;
    set<int> factors;
    map<int,int> freq;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            factors.insert(i);
            while(n%i==0){
                n=n/i;
                freq[i]++;
                maxN=max(maxN,freq[i]);
            }
        }
    }
    factors.insert(1);
    freq[1]++;
    maxN=max(maxN,1);
    int target=pow(2,ceil(log2(maxN)));
    int req=0,ans=1;
    for(auto i:factors){
        if(target>freq[i] && i!=1) req=1;
        ans*=i;
    }
    req+=log2(target);
    cout<<ans<<' '<<req<<endl;
    return 0;
} 
=======
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n,maxN=0;
    cin>>n;
    set<int> factors;
    map<int,int> freq;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            factors.insert(i);
            while(n%i==0){
                n=n/i;
                freq[i]++;
                maxN=max(maxN,freq[i]);
            }
        }
    }
    factors.insert(1);
    freq[1]++;
    maxN=max(maxN,1);
    int target=pow(2,ceil(log2(maxN)));
    int req=0,ans=1;
    for(auto i:factors){
        if(target>freq[i] && i!=1) req=1;
        ans*=i;
    }
    req+=log2(target);
    cout<<ans<<' '<<req<<endl;
    return 0;
} 
>>>>>>> 80105c8269c21d922555d30fdbdb6a55c15d2c34
