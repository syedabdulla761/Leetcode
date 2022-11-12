class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> ps;
        vector<vector<int>> ans;
        ps.push_back(1);
        ans.push_back(ps);
        if(numRows==1){
            return ans;
        }
        ps.push_back(1);
        ans.push_back(ps);
        if(numRows==2){
            return ans;
        }
        ps.clear();
        for(int i=2;i<numRows;i++){
            ps.push_back(1);
            for(int j=0;j<ans[i-1].size()-1;j++){
                ps.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            ps.push_back(1);
            ans.push_back(ps);
            ps.clear();
        }
        return ans;
    }
    
};