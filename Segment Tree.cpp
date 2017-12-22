/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int build(int node, int start, int end, int tree[], int a[])
{
    if(start==end){
        tree[node]=a[start];
    }
    else{
        int mid=(start+end)/2;
        build(2*node, start, mid, tree, a);
        build(2*node+1, mid+1, end, tree, a);
        tree[node]=min(tree[2*node],tree[2*node+1]);
    }
    return 0;
}
int update(int node, int start, int end, int idx, int val, int tree[], int a[])
{
    if(start==end){
        a[idx]=val;
        tree[node]=val;
    }
    else{
        int mid=(start+end)/2;
        if(idx>=start&&idx<=mid){
            update(2*node, start, mid, idx, val, tree, a);
        }
        else if(idx>=mid+1&&idx<=end){
            update(2*node+1, mid+1, end, idx, val, tree, a);
        }
        tree[node]=min(tree[2*node],tree[2*node+1]);
    }
}
int query(int node, int start, int end, int l, int r, int tree[])
{
    if(r<start || l>end){
        return 1000000;
    }
    if(l<=start && end<=r){
        return tree[node];
    }
    int mid=(start+end)/2;
    int p1=query(2*node, start, mid, l, r, tree);
    int p2=query(2*node+1, mid+1, end, l, r,tree);
    return min(p1,p2);

}
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	int tree[2*n];
	build(1, 0, n-1, tree, a);
	char c;
	int arg1,arg2;
	for(int i=0;i<q;i++){
        cin>>c>>arg1>>arg2;
        if(c=='q'){
            cout<<query(1,0,n-1,arg1-1,arg2-1,tree)<<endl;
        }
        else{
            update(1, 0, n-1, arg1-1, arg2, tree, a);
        }
	}
	return 0;
}
