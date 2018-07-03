/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int counter=0;
	vector<int> a(n+1);
	vector<bool> store(n+1);
	int s[n];
	for(int i=0;i<n;i++){
        cin>>s[i];
        a[s[i]]++;
	}
	int np,point=0,present=-1;
	//store[s[point]]=true;
	for(int i=1;i<n+1;i++){
        if(a[i]==0){
            np=i;
            //cout<<np<<" "<<" "<<present<<" "<<store[present]<<" "<<s[point]<<endl;
        }
        else{
            continue;
        }
        if(a[s[point]]>1){
            int flag=0;
            if(s[point]>np || store[s[point]]==true){
                a[s[point]]--;
                s[point]=np;
                store[s[point]]=true;
                point++;
                counter++;
                a[i]++;
            }
            else{
                store[s[point]]=true;      // to remember which element has been skipped previously
                point++;
                i--;
            }
        }
        else{
            point++;
            i--;
        }
	}
	cout<<counter<<endl;
	for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
	}
	cout<<endl;
	return 0;
}
