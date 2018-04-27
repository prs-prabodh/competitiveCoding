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
	string a;
	cin>>a;
	int i=0,c=0;
	while(i<n){
        if(a[i]=='0'){
            i++;
            if(a[i]=='1'){
                i++;
                if(a[i]=='0'){
                    c++;
                    i++;
                }
            }
        }
        else i++;
	}
	cout<<c<<endl;
	return 0;
}
