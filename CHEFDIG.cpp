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
		string n;
		int arr[10];
		for(int i=0;i<10;i++){
            arr[i]=0;
		}
		cin>>n;
		int len=0;
		while(n[len]!='\0'){
            int r=(int)(n[len]-'0');
            arr[r]++;
            len++;
		}
		if(arr[6]>0){
            for(int i=5;i<10;i++){
                if(arr[i]>0&&i!=6)
                    cout<<(char)(60+i);
                if(arr[i]>1&&i==6)
                    cout<<(char)(60+i);
            }
		}
        if(arr[7]>0){
            for(int i=0;i<10;i++){
                if(arr[i]>0&&i!=7)
                    cout<<(char)(70+i);
                if(arr[i]>1&&i==7)
                    cout<<(char)(70+i);
            }
		}
		if(arr[8]>0){
            for(int i=0;i<10;i++){
                if(arr[i]>0&&i!=8)
                    cout<<(char)(80+i);
                if(arr[i]>1&&i==8)
                    cout<<(char)(80+i);
            }
		}
		if(arr[9]>0&&arr[0]>0){
            cout<<(char)(90);
		}
		cout<<endl;
	}
	return 0;
}
