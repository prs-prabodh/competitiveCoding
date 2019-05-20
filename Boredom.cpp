/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> m;
ll calc(int x, int m){
    if(x==m)
    return m;
    if(x>m)
    return 0;
    return max(x+calc(x+2), calc(x+1));
}
int main()
{
	int n;
    cin>>n;
    int x, mn=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>x;
        f[x]++;
        mn=max(mn,x);
    }
    int ans1=calc(1, mn), ans2=calc(2, mn);
    cout<<max(ans1, ans2)<<endl;
    return 0;
}