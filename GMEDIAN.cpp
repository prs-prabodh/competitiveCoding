/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define LL long long
const LL M = 1e9+7;
using namespace std;
LL C[1005][1005];
void init(int n, int k) 
{ 
    int i,j; 
    for (i=0;i<=n;i++) 
    { 
        for (j=0; j<=min(i, k);j++) 
        { 
            if (j==0 || j==i) 
                C[i][j] = 1; 
            else
                C[i][j] = (C[i-1][j-1] % M + C[i-1][j] % M)%M; 
        } 
    } 
} 
LL exp(LL a, LL b)
{
    if(b==0||a==1)
        return 1;
    if(b==1)
        return a%M;
    if(b==2)
        return ((a%M)*(a%M))%M;
    if(b%2!=0)
        return ((a%M)*exp(exp(a,(b-1)/2),2))%M;
    if(b%2==0)
        return exp(exp(a,b/2),2)%M;
    return 439579396;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin>>test;
    while(test--){
        LL count=0;
        int n;
        cin>>n;
        init(n+4,n+4);
        LL a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        count = exp(2, n-1);
        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<n && a[i]==a[j]){
                int left=i,right=n-j-1;
                count = ( count + C[left+right][left] % M ) % M;
                j++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
