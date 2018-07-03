/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
struct Edge
{
    int d;
    int s;
    int w;
};
struct Subset
{
    int parent;
    int rnk;    //rank
};
int comp(const void *a, const void *b)
{
    struct Edge* a1=(struct Edge*)a;
    struct Edge* b1=(struct Edge*)b;
    return (a1->w > b1->w);
}
int root(struct Subset*subset, int a)
{
    while(a!=subset[a].parent){
        a=subset[a].parent;
    }
    return a;
}
bool f(struct Subset*subset, int a, int b)
{
    a=root(subset,a);
    b=root(subset,b);
    if(a==b)
        return true;
    return false;
}
void uni(struct Subset*subset, int a, int b)
{
    int root_a=root(subset,a);
    int root_b=root(subset,b);
    if(subset[root_a].rnk<subset[root_b].rnk){
        subset[root_a].parent=root_b;
    }
    else if(subset[root_a].rnk>subset[root_b].rnk){
        subset[root_b].parent=root_a;
    }
    else if(subset[root_a].rnk==subset[root_b].rnk){
        subset[root_a].parent=root_b;
        subset[root_b].rnk++;
    }
}
int main()
{
	int V,E=0;
	cout<<"Enter the number of vertices"<<endl;
	cin>>V;
	cout<<"Enter the number of edges"<<endl;
	cin>>E;
	struct Edge *edge= new struct Edge[E];
	for(int i=0;i<E;i++){
        cout<<"Source: ";
        cin>>edge[i].s;
        cout<<"Destination: ";
        cin>>edge[i].d;
        cout<<"Weight: ";
        cin>>edge[i].w;
        cout<<endl;
	}
	qsort(edge,E,sizeof(edge[0]),comp);
	struct Subset*subset=new struct Subset[V];
	for(int i=0;i<V;i++){
        subset[i].parent=i;
        subset[i].rnk=0;
	}
	int v=0,e=0;
	struct Edge ans[V];
	while(v<V-1){
        if(!f(subset,edge[e].s,edge[e].d)){
            ans[v++]=edge[e];
            uni(subset,edge[e].s,edge[e].d);
        }
        e++;
        if(e==E-1){
            cout<<"MST does not exist"<<endl;
            return 0;
        }
	}
	for(int i=0;i<V-1;i++){
        cout<<"Source: "<<ans[i].s<<" Destination: "<<ans[i].d<<" Weight: "<<ans[i].w<<endl;
	}
	return 0;
}
