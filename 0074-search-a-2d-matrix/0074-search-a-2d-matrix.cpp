class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=target<matrix[matrix.size()/2][0]?matrix.size()-1:matrix.size();
        int i=target>matrix[matrix.size()/2][matrix[0].size()-1]?(matrix.size()/2)+1:0;
        if(i!=0 && s!=matrix.size())
            return (find(matrix[matrix.size()/2].begin(),matrix[matrix.size()/2].end(),target)-matrix[matrix.size()/2].begin())<matrix[0].size();
        for(i;i<s;i++){
            if((find(matrix[i].begin(),matrix[i].end(),target)-matrix[i].begin())<matrix[i].size()){
                return true;
            }
        }
        return false;
    }
};