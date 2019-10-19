/*
*  @author Prabodh Ranjan Swain
*  Institute - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, q;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            a[i]+=a[i-1];
        }
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int l, r;
        cin>>l>>r;
        cout << (a[r - 1] - (l > 1 ? a[l - 2] : 0)) / 10 << endl;
    }
    return 0;
}