/*
 *	@author Prabodh Ranjan Swain
 *	Institute - ASET, New Delhi
 */

 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ld long double
 const int M = 1e9+7;
 
 int main() {
 	int n;
 	cin>>n;
 	string s;
 	cin>>s;
 	int cnt=0;
 	vector<pair<int,int>> rec;
 	for(int i=0;i<n-1;i++) {
 		if(s[i]==s[i+1]){
 			int l=i;
 			while(i<n-1 && s[++i]==s[i+1]);
 			int r=i;
 			rec.push_back({l,r});
 		
} 	}
 	for(int i=0;i<rec.size();i++) {
 		set<char> cands={'R','G','B'};
 		cands.erase(cands.find(s[rec[i].first]));
 		for(int j=rec[i].first+1;j<=rec[i].second;j+=2){
 			if(j==rec[i].second && cands.find(s[rec[i].second+1])!=cands.end()){
 				cnt++;
 				cands.erase(cands.find(s[rec[i].second+1]));
 				s[j]=*(cands.begin());
 				continue;
 			}
 			cnt++;
 			s[j]=*(cands.begin());
 		}
 	}
 	cout<<cnt<<endl;
 	cout<<s;
 	return 0;
 }