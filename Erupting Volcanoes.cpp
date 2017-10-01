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
	int m;
	cin>>m;
	vector<vector<int>> a(n, vector<int> (n));
	int maxeffect=0;
	for(int i=0;i<m;i++){
        int x,y,l;
        cin>>x>>y>>l;
        int ymin=max(0,(y-l+1)),xmin=max(0,x-l+1),xmax=min(n-1,x+l-1),ymax=min(n-1,y+l-1);
        for(int xi=xmin;xi<=xmax;xi++){
            int inc;
            for(int yi=ymin;yi<=ymax;yi++){
                inc=min((l-abs(x-xi)),(l-abs(y-yi)));
                a[xi][yi]+=inc;
                maxeffect=max(maxeffect,a[xi][yi]);
            }
        }
	}
	cout<<maxeffect<<endl;
	return 0;
}
