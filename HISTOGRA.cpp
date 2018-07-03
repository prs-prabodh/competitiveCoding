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
	while(n){
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //cout<<"done"<<endl;
        stack<long long int> ht,pos;
        long long int maxSize=-1LL;
        for(int i=0;i<n;i++){
            if(ht.size()==0||(ht.top()<a[i])){
                ht.push(a[i]);
                pos.push(i);
            }
            else if(ht.top()>a[i]){
                long long int tempH,tempP;
                while(ht.size()>0&&ht.top()>a[i]){
                    //cout<<i<<endl;
                    tempH=ht.top();
                    ht.pop();
                    tempP=pos.top();
                    pos.pop();
                    long long int tempS=tempH*(i-tempP);
                    maxSize=max(tempS,maxSize);
                    //cout<<"here";
                }
                //cout<<"reached";
                ht.push(a[i]);
                pos.push(tempP);
            }
        }
        //cout<<"done"<<endl;
        while(ht.size()!=0){
            //cout<<ht.size()<<endl;
            long long int h=ht.top();
            ht.pop();
            long long int p=pos.top();
            pos.pop();
            long long int s=h*(n-p);
            maxSize=max(maxSize,s);
        }
        cout<<maxSize<<endl;
        cin>>n;
	}
	return 0;
}
