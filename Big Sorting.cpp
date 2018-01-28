/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b)
{
    long long int l1=a.length();
    long long int l2=b.length();
    if(l1>l2)
        return false;
    else if(l2>l1)
        return true;
    else{
        return a<b;
    }
}
int main()
{
	int n;
	cin>>n;
	vector<string> ar(n,"");
	for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end(),comp);
    for(int i=0;i<n;i++)
        cout<<ar[i]<<endl;
	return 0;
}
