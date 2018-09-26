/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int workbook(int n, int k, int *a)
{
    int cnt=0,pgno=0;
    for(int i=0;i<n;i++){
        pgno++;
        int prbno=1;
        while(prbno<=a[i]){
            if(prbno==pgno)
            cnt++;
            if(prbno%k==0 && prbno!=a[i])
            pgno++;
            prbno++;
        }
    }
    return cnt;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<workbook(n,k,arr)<<endl;
    return 0;
}
