/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> s(9,0);
	for(int i=0;i<9;i++)
        cin>>s[i];
    int minCost=INT_MAX;
    vector<vector<int>> store={{8, 1, 6, 3, 5, 7, 4, 9, 2}, {6, 1, 8, 7, 5, 3, 2, 9, 4},
         {4, 3, 8, 9, 5, 1, 2, 7, 6}, {2, 7, 6, 9, 5, 1, 4, 3, 8},
         {2, 9, 4, 7, 5, 3, 6, 1, 8}, {4, 9, 2, 3, 5, 7, 8, 1, 6},
         {6, 7, 2, 1, 5, 9, 8, 3, 4}, {8, 3, 4, 1, 5, 9, 6, 7, 2}};
    for(int i=0;i<8;i++){
        int sum=0;
        for(int j=0;j<9;j++){
            sum+=abs(s[j]-store[i][j]);
        }
        minCost=min(minCost,sum);
    }
    cout<<minCost<<endl;
	return 0;
}
