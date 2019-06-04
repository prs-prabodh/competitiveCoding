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

    int n;
    cin>>n;
    int a[n];
    bool odd=false;
    bool even=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        odd |= a[i] % 2 ? true : false;
        even |= a[i] % 2 ? false : true;
    }
    if(odd && even){
        sort(a, a+n);
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}