/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	set<int> door;
	door.insert(2);
	door.insert(3);
	cout<<"1"<<endl;
	int y;
	cin>>y;
	door.erase(door.find(y));
	for(auto i:door)cout<<i<<endl;
    return 0;
} 