/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int push(int a[],int top,int item)
{
    a[++top]=item;
    return top;
}
int main()
{
	int x,flag=0;
	do{
		int n;
		if(!flag){
            cin>>n;
            flag=1;
		}
        else n=x;
		int a[n],stk1[n],stk2[n];
		int top1=-1,top2=-1,p=0;
		int c=1;
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		while(c<=n){
            if(c==a[p]&&p<n){
                top1=push(stk1,top1,c);
                p++;
                c++;
            }
            else if(c==stk2[top2]&&top2>-1){
                top1=push(stk1,top1,c);
                top2--;
                c++;
            }
            else{
                if((stk2[top2]>a[p]&&p<n)||top2<0){
                    top2=push(stk2,top2,a[p]);
                    p++;
                }
                else{
                    c=100000;
                    break;
                }
            }
		}
		if(c==n+1)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cin>>x;
	}while(x);
	return 0;
}
