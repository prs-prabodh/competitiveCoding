/*
*	@author Prabodh Ranjan Swain
*	Institute - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int M = 1e9+7;

void print(string s) {
	for(int i=0;i<s.length();i++)
		cout<<s[i];
	cout<<endl;
	return;
}

int main() {
	int n;
	cin>>n;
	string s, s1="", s2="", s3="";
	cin>>s;
	string l1="RGB", l2="BGR";
	for(int i=0,j=0;i<n;i++,j=(j+1)%3)
		s1+=l1[j];
	for(int i=0,j=1;i<n;i++,j=(j+1)%3)
		s2+=l1[j];
	for(int i=0,j=2;i<n;i++,j=(j+1)%3)
		s3+=l1[j];
	int s1len=0, s2len=0,s3len=0;
	pair<int, string> cand1, cand2;
	for(int i=0;i<n;i++) {
		if(s[i]!=s1[i])
			s1len++;
		if(s[i]!=s2[i])
			s2len++;
		if(s[i]!=s3[i])
			s3len++;
	}
	if(s1len<=s2len) {
		if(s1len<=s3len) {
			cand1={s1len,s1};		}
		else {
			cand1={s3len,s3};
		}
	}
	else {
		if(s2len<=s3len) {
			cand1={s2len,s2};
		}
		else {
			cand1={s3len,s3};
		}
	}
	s1="",s2="",s3="";
	for(int i=0,j=0;i<n;i++,j=(j+1)%3)
		s1+=l2[j];
	for(int i=0,j=1;i<n;i++,j=(j+1)%3)
		s2+=l2[j];
	for(int i=0,j=2;i<n;i++,j=(j+1)%3)
		s3+=l2[j];
	s1len=0, s2len=0,s3len=0;
	for(int i=0;i<n;i++) {
		if(s[i]!=s1[i])
			s1len++;
		if(s[i]!=s2[i])
			s2len++;
		if(s[i]!=s3[i])
			s3len++;
	}
	if(s1len<=s2len) {
		if(s1len<=s3len) {
			cand2={s1len,s1};		
		}
		else {
			cand2={s3len,s3};
		}
	}
	else {
		if(s2len<=s3len) {
			cand2={s2len,s2};
		}
		else {
			cand2={s3len,s3};
		}
	}	
	if(cand1.first<=cand2.first) {
		cout<<cand1.first<<endl;
		print(cand1.second);
	}
	else {
		cout<<cand2.first<<endl;
		print(cand2.second);
	}
	return 0;
}