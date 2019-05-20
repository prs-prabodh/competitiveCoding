/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    unordered_map<string, int> m;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        int cnt=m[x];
        m[x]++;
        if(cnt>0){
        	x+=to_string(cnt);
        	cout<<x<<endl;
        }
        else{
        	cout<<"OK"<<endl;
        }
    }
    
    return 0;
}