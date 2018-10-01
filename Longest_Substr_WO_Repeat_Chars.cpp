/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
class Solution{
    public:
        int lengthOfLongestSubtring(string s){
            set<char> charset;
            for(int i=0;i<s.length();i++)
                charset.insert(s[i]);
            map<char, int> dp;
            int maxLength=0,counter=0;
            for(int i=0;i<s.length();i++){
                if(dp[s[i]]==0){
                    dp[s[i]]=i+1;
                    counter++;
                }
                else{
                    for(auto j : charset){
                        if(dp[j]<dp[s[i]] && dp[j]>0){
                            dp[j]=0;
                            counter--;
                        }
                    }
                    dp[s[i]]=i+1;
                }
                maxLength=max(maxLength,counter);
            }
            return maxLength;
        }
};
int main()
{
    Solution s;
    string String;
    cin>>String;
    int maxLength=s.lengthOfLongestSubtring(String);
    cout<<maxLength<<endl;
    return 0;
}
