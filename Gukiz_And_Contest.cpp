/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
    cin>>n;
    vector<int> a, b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    unordered_map<int, int> m;
    int currRat = -1, currRank = 0, ref = 1;
    for(int i=n;i>0;i--){
        if(b[i-1]!=currRat){
            currRat = b[i-1];
            currRank = ref;
            i++;
            continue;
        }
        m[b[i-1]] = currRank;
        ref++;
        b.pop_back();
    }
    for(int i=0;i<n;i++){
        cout<<m[a[i]]<<' ';
    }
    cout<<endl;
    
    return 0;
}