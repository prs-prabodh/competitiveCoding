/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
vector<vector<int>> mat;
int m,n,target;
class Solution{
    public:
        bool searchMatrix(vector<vector<int>> &matrix, int target){
            int row=0,col,m=matrix.size(),n;
            if(!m)
                return false;
            n=matrix[0].size();
            if(!n)
                return false;
            col=n-1;
            while(col>0 && row<m-1){
                if(matrix[row][col]==target)
                    return true;
                if(target<matrix[row][col])
                    col--;
                if(target>matrix[row][col])
                    row++;
            }
            return false;
        }
};
int main()
{
    Solution s;
    cin>>m>>n>>target;
    mat.resize(m,vector<int>(n,0));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    cout<<s.searchMatrix(mat,target);
    return 0;
}
