/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int calc(int n, int c){
	return ceil(((1002-c)-sqrt(pow(1002-c,2)-(4*n)))/2);
}
int main()
{
	int n,c;
	cin>>n>>c;
	int divs=calc(n,c);
	// cout<<divs;
	int current=0,result=0;
	while(!result && n-current>divs){
		current+=divs;
		cout<<"1 "<<current<<endl;
		cin>>result;
	}	
	if(result){
		cout<<"2"<<endl;
		result=0;
		int test=current-divs;
		while(test<=current-1 && !result){
			test++;
			cout<<"1 "<<test<<endl;
			cin>>result;
		}
		if(result){
			cout<<"3 "<<test<<endl;
			return 0;
		}
		cout<<"3 "<<current<<endl;
		return 0;
	}
	while(current<=n){
		current++;
		cout<<"1 "<<current<<endl;
		cin>>result;
		if(result){
			cout<<"3 "<<current<<endl;
			break;
		}
	}
    return 0;
} 