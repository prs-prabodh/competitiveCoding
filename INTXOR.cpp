/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
LL *a,curr=0;
void four(){
	LL x1,x2,x3,x4,r1,r2,r3,r4;
	cout<<"1 "<<curr+1<<" "<<curr+2<<" "<<curr+3<<endl;
	cin>>r1;
	cout<<"1 "<<curr+1<<" "<<curr+2<<" "<<curr+4<<endl;
	cin>>r2;
	cout<<"1 "<<curr+1<<" "<<curr+3<<" "<<curr+4<<endl;
	cin>>r3;
	cout<<"1 "<<curr+2<<" "<<curr+3<<" "<<curr+4<<endl;
	cin>>r4;
	x2=(r1^r4)^r2;
	x3=(r1^r4)^r3;
	x4=(x2^x3)^r4;
	x1=(x2^x3)^r1;
	a[curr]=x1;
	a[curr+1]=x2;
	a[curr+2]=x3;
	a[curr+3]=x4;
	curr+=4;
}
void five(){
	LL r1,r2,r3,r4,r5,x1,x2,x3,x4,x5;
	cout<<"1 "<<curr+1<<" "<<curr+2<<" "<<curr+3<<endl;
	cin>>r1;
	cout<<"1 "<<curr+2<<" "<<curr+3<<" "<<curr+4<<endl;
	cin>>r2;
	cout<<"1 "<<curr+3<<" "<<curr+4<<" "<<curr+5<<endl;
	cin>>r3;
	cout<<"1 "<<curr+1<<" "<<curr+4<<" "<<curr+5<<endl;
	cin>>r4;
	cout<<"1 "<<curr+1 <<" "<<curr+2<<" "<<curr+5<<endl;
	cin>>r5;
	x5=r1^r2^r4;
	x3=r1^r5^x5;
	x4=r3^x3^x5;
	x2=r2^x3^x4;
	x1=r1^x2^x3;
	a[curr]=x1;
	a[curr+1]=x2;
	a[curr+2]=x3;
	a[curr+3]=x4;
	a[curr+4]=x5;
	curr+=5;
}
void seven(){
	LL r1,r2,r3,r4,r5,r6,r7,x1,x2,x3,x4,x5,x6,x7,superset;
	cout<<"1 "<<curr+1<<" "<<curr+2<<" "<<curr+3<<endl;
	cin>>r1;
	cout<<"1 "<<curr+2<<" "<<curr+3<<" "<<curr+4<<endl;
	cin>>r2;
	cout<<"1 "<<curr+3<<" "<<curr+4<<" "<<curr+5<<endl;
	cin>>r3;
	cout<<"1 "<<curr+4<<" "<<curr+5<<" "<<curr+6<<endl;
	cin>>r4;
	cout<<"1 "<<curr+5<<" "<<curr+6<<" "<<curr+7<<endl;
	cin>>r5;
	cout<<"1 "<<curr+1<<" "<<curr+6<<" "<<curr+7<<endl;
	cin>>r6;
	cout<<"1 "<<curr+1<<" "<<curr+2<<" "<<curr+7<<endl;
	cin>>r7;
	x1=r1^r3^r4^r6^r7;
	x5=r5^r6^x1;
	superset=r2^r6^x5;
	x7=superset^r1^r4;
	x6=superset^r2^x1^x5^x7;
	x2=superset^r3^x1^x6^x7;
	x3=superset^r4^x1^x2^x7;
	x4=superset^r5^x1^x2^x3;
	a[curr]=x1;
	a[curr+1]=x2;
	a[curr+2]=x3;
	a[curr+3]=x4;
	a[curr+4]=x5;
	a[curr+5]=x6;
	a[curr+6]=x7;
	curr+=7;
}
int main()
{
	int test;
	cin>>test;
	while(test--){
		LL n;
		curr=0;
		cin>>n;
		a=new LL[n];
		if(n%4==0)
			while(n-curr>=4)
				four();
		else if(n%4==1){
			while(n-curr!=5)
				four();
			five();
		}
		else if(n%4==2){
			while(n-curr!=10)
				four();
			five();
			five();
		}
		else{
			while(n-curr!=7)
				four();
			seven();
		}
		cout<<"2 ";
		for(LL i=0;i<n;i++) cout<<a[i]<<' ';
		cout<<endl;
		LL result;
		cin>>result;
	}
    return 0;
} 