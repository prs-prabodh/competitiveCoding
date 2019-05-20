/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        int len=x.length();
        if(len>10){
            cout<<x[0]+to_string(len-2)+x[len-1]<<endl;
        }
        else cout<<x<<endl;
    }
    
    return 0;
}