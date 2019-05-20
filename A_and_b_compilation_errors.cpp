/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> e, eT;
void find(int n){
    sort(eT.begin(), eT.end());
    int p=n;
    for(int i=0;i<n;i++){
        if(e[i]!=eT[i]){
            p=i;
            break;
        }
    }
    cout<<e[p]<<endl;
}
int main()
{
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        e.push_back(x);
    }
    for(int i=0;i<n;i++)}{
        int x;
        cin>>x;
        eT.push_back(x);
    }
    sort(e.begin(), e.end());
    find(n-1);
    e=eT;
    eT.clear();
    for(int i=0;i<n-2;i++){
        int x;
        cin>>x;
        eT.push_back(x);
    }
    find(n-2);
    return 0;
}