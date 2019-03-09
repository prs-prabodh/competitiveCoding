#include<bits/stdc++.h>
using namespace std;

map<string,vector<pair<string,double>>> adj;
map<string, bool> visited;
bool func(string start, string end, vector<double> &v) {
    // cout<<start<<' '<<end<<endl;
    visited[start]=true;
	if(start==end){
	    if(adj[start].size()>0)
		    return true;
		else return false;
    }
	for(int i=0;i<adj[start].size();i++){
	    if(!visited[adj[start][i].first]){
    		v.push_back(adj[start][i].second);
    		if(func(adj[start][i].first,end,v))
    			return true;
    		else v.pop_back();
	    }
	}
	return false;
}

double calc(vector<double> v){
	double ans=1.00;
	for(auto i:v){
		ans*=i;
	}
	return ans;
}

class Solution {
public:
    vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
		for(int i=0;i<equations.size();i++){
			adj[equations[i].first].push_back({equations[i].second,values[i]});
			adj[equations[i].second].push_back({equations[i].first,1/values[i]});
		}
// 		for(auto i:adj){
// 		   cout<<i.first<<' ';
// 		   for(auto j:i.second){
// 		       cout<<j.first<<' '<<j.second<<' ';
// 		   }
// 		}
		vector<double> ans;
		for(int i=0;i<queries.size();i++){
			vector<double> v;
			visited.clear();
			ans.push_back(func(queries[i].first,queries[i].second,v)?calc(v):-1.00);
		}
		return ans;
    }
};

//	Driver Code

int main(){
	Solution sol;
	vector<pair<string,string>> equations={{"a","b"},{"b","c"},{"bc","cd"}};
	vector<double> values={1.5,2.5,5.0};
	vector<pair<string,string>> queries={{"a","c"},{"c","b"},{"bc","cd"},{"cd","bc"}};
	vector<double> ans = sol.calcEquation(equations, values, queries);
	for(auto i:ans){
		cout<<i<<' ';
	}
	return 0;
}