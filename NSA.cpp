/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
long long findCost(int idx, int shift, string s, vector<long long> freq)
{
    freq[s[0]-'a']++;
    long long cost=0LL;
    int store=s[idx]-'a';
    freq[s[idx]-'a']--;
    freq[shift]++;
    s[idx]=(char)('a'+shift);
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']--;
        for(int j=(s[i]-'a'+1);j<26;j++){
            cost+=freq[j];
        }
    }
    freq[s[0]-'a']--;
    return cost+(long long)abs(store-shift);
}
int main()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int len=s.length();
        vector<vector<long long>> left(len,vector<long long>(26)), right(len,vector<long long>(26,0LL));
        vector<long long> freq(26,0LL);
        for(int i=0;i<len;i++)
            freq[s[i]-'a']++;
        freq[s[0]-'a']--;
        right[0][25]=0LL;
        left[0][25]=0LL;
        for(int i=24;i>=0;i--){
            right[0][i]=freq[i+1]+right[0][i+1];
            left[0][i]=0LL;
        }
        for(int i=1;i<len;i++){
            int currLetter=s[i]-'a';
            int prevLetter=s[i-1]-'a';
            for(int j=0;j<26;j++){
                right[i][j]=right[i-1][j];
                left[i][j]=left[i-1][j];
                if(j<currLetter)
                    right[i][j]=max(right[i][j]-1,0LL);
                if(j>prevLetter)
                    left[i][j]=left[i][j]+1;
            }
        }
        long long maxChange=0LL;
        int idx=-1,change=-1;
        for(int i=0;i<len;i++){
            int currLetter=s[i]-'a';
            long long currCost=left[i][currLetter]+right[i][currLetter];
            long long newCost=0LL;
            for(int j=0;j<26;j++){
                newCost=left[i][j]+right[i][j]+abs(currLetter-j);
                if(newCost<currCost){
                    if(abs(newCost-currCost)>maxChange){
                        maxChange=abs(newCost-currCost);
                        idx=i;
                        change=j;
                    }
                }
            }
        }
        long long cost=(idx==-1)?findCost(0,s[0]-'a',s,freq):findCost(idx,change,s,freq);
        cout<<cost<<endl;
    }
    return 0;
}
