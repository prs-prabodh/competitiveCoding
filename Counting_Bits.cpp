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
        vector<int> countBits(int num)
        {
            vector<int> ans = {0,1};
            if(num==0)
            return ans = {0};
            if(num==1)
            return ans;
            else{
                int pointer = 0, end = 1, pow2 = 2;
                while(end<num){
                    int currNum = ans[pointer] + 1;
                    ans.push_back(currNum);
                    if(end+1 == pow(2,pow2)-1){
                        pointer=-1;
                        pow2++;
                    }
                    pointer++;
                    end++;
                }
            }
            return ans;
        }
};
int main()
{
    Solution s;
    int num;
    cin>>num;
    vector<int> ans = s.countBits(num);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
