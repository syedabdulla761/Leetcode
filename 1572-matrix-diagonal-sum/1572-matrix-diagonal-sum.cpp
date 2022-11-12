class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int d=0,rd=0;
        for(int i=0;i<mat.size();i++){
                  d+=mat[i][i];
                  rd+=mat[mat.size()-i-1][i];
        }
        if(mat.size()%2!=0){
            d-=mat[mat.size()/2][mat.size()/2];
        }
        return d+rd;
    }
};