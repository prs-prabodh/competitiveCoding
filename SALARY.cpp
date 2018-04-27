/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--){
		int n,diff=0,fixed=1;
		long long sum=0;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		sort(a.rbegin(),a.rend());
		for(int i=1;i<n;i++){
            sum+=((a[0]-a[i]-diff)*fixed);
            diff=(a[0]-a[i]);
            fixed++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
