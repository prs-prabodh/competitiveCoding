/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int *a,n,q,k;
list<int> state;
multiset<int> longest;
void init()
{
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]){
            count++;
            while(i<n-1 && a[++i]) count++;
            state.push_back(count);
            longest.insert(count);
            if(i<=n-1 && !a[i]) state.push_back(-1);
            count=0;
        }
        else{
            state.push_back(-1);
            longest.insert(-1);
        }
    }
    return;
}
void shift()
{
    auto end=state.rbegin();
    auto front=state.begin();
    if((*end)<0){
        state.pop_back();
        state.push_front(-1);
    }
    else{
        longest.erase(longest.find(*end));
        (*end)-=1;
        if((*end)==0) state.pop_back();
        else longest.insert(*end);
        if((*front)>0){
            (*front)++;
            longest.erase(longest.find((*front)-1));
            longest.insert(*front);
        }
        else{
            state.push_front(1);
            longest.insert(1);
        }
    }
    return;
}
void showMax()
{
    int ans = max(0,*(longest.rbegin()));
    ans>k?cout<<k<<endl:cout<<ans<<endl;
    return;
}
void show()
{
    for(auto i : state) cout<<i<<" ";
    cout<<endl;
    return;
}
int main()
{
    cin>>n>>q>>k;
    a=new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    init();
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='!') shift();
        else showMax();
    }
    return 0;
}
