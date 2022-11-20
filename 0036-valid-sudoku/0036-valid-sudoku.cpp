class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> x,y;
        int r1=0,r2=3,c1=0,c2=3;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                    x[board[i][j]]++;
                    y[board[j][i]]++;
            }
            for(auto it:x){
                if(it.first!='.' && it.second>1)
                    return false;
            }
            for(auto it:y){
                if(it.first!='.' && it.second>1)
                    return false;
            }
            x.clear();
            y.clear();
        }
        for(int i=r1;i<r2;i++){
             for(int j=c1;j<c2;j++){
                 x[board[i][j]]++;
             }
            
             for(auto it:x){
                 if(it.first!='.' && it.second>1)
                     return false;
             }
            
            if(i==2 || i==5){
                r1+=3;
                r2+=3;
                x.clear();
            }
        }
        x.clear();
        r1=0,r2=3;
        for(int i=r1;i<r2;i++){
             for(int j=3;j<6;j++){
                 x[board[i][j]]++;
             }
             for(auto it:x){
                 if(it.first!='.' && it.second>1)
                     return false;
             }
            if(i==2 || i==5){
                r1+=3;
                r2+=3;
                x.clear();
            }
        }
        x.clear();
        r1=0,r2=3;
        for(int i=r1;i<r2;i++){
             for(int j=6;j<9;j++){
                 x[board[i][j]]++;
             }
             for(auto it:x){
                 if(it.first!='.' && it.second>1)
                     return false;
             }
            if(i==2 || i==5){
                r1+=3;
                r2+=3;
                x.clear();
            }
        }
        return true;
    }
};