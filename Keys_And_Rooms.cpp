/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

bool *visited;
int n;
vector<vector<int>> rooms;

class Solution {
	public:
	void visit(int node) {
		visited[node]=true;
		for(int i=0;i<rooms[node].size();i++){
			if(!visited[rooms[node][i]])
				visit(rooms[node][i]);
		}
	}
	bool canVisitAllRooms (vector<vector<int>> &r) {
		rooms=r;
		n=rooms.size();
		visited=new bool[n];
		memset(visited, false, sizeof(bool)*n);
		visit(0);
		for(int i=1;i<n;i++){
			if(!visited[i])
				return false;
		}
		return true;
	}	
};

// Driver Code

int main() {
		Solution sol;
		vector<vector<int>> rooms={{1},{2},{3},{}};
		cout<<sol.canVisitAllRooms(rooms);		
		return 0;
}