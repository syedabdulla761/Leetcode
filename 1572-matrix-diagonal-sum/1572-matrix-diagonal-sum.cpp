class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
                  ans+=mat[i][i];
                  if(mat.size()-i-1!=i)
                    ans+=mat[mat.size()-i-1][i];
        }
        return ans;
    }
};