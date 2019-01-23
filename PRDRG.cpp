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
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long double l=0.00,len=0.5,curr=0.5;
        if(n>=2){
            for(int i=2;i<=n;i++){
                if(i%2){
                    l=curr;
                    curr=l+(len/2);
                    len/=2;
                }
                else{
                    curr=l+(len/2);
                    len/=2;
                }
            }
        }
        cout<<(int)(curr*pow(2,n))<<" "<<(int)pow(2,n)<<" ";
    }
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
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long double l=0.00,len=0.5,curr=0.5;
        if(n>=2){
            for(int i=2;i<=n;i++){
                if(i%2){
                    l=curr;
                    curr=l+(len/2);
                    len/=2;
                }
                else{
                    curr=l+(len/2);
                    len/=2;
                }
            }
        }
        cout<<(int)(curr*pow(2,n))<<" "<<(int)pow(2,n)<<" ";
    }
    return 0;
}
>>>>>>> 80105c8269c21d922555d30fdbdb6a55c15d2c34
