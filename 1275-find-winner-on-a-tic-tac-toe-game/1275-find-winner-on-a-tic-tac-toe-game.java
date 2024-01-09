class Solution {
    public String tictactoe(int[][] moves) {
        int firstR=0,secondR=0,thirdR=0;
        int firstC=0,secondC=0,thirdC=0;
        int dOne=0,dTwo=0;
        for(int i=0;i<moves.length;i++){
            if(i%2==0){
                //A moves
                if(moves[i][0]==0)firstR++;
                if(moves[i][0]==1)secondR++;
                if(moves[i][0]==2)thirdR++;
                if(moves[i][1]==0)firstC++;
                if(moves[i][1]==1)secondC++;
                if(moves[i][1]==2)thirdC++;
                if(moves[i][0]==moves[i][1])dOne++;
                if((moves[i][0]==0 && moves[i][1]==2) || (moves[i][0]==1 && moves[i][1]==1) || (moves[i][0]==2 && moves[i][1]==0))dTwo++;
            }
            if(firstR==3 || secondR==3 || thirdR==3 || firstC==3 || secondC==3 || thirdC==3 || dOne==3 || dTwo==3)return "A";
        }
        firstR=0;secondR=0;thirdR=0;firstC=0;secondC=0;thirdC=0;dOne=0;dTwo=0;
        for(int i=0;i<moves.length;i++){
            if(i%2!=0){
                //B moves
                if(moves[i][0]==0)firstR++;
                if(moves[i][0]==1)secondR++;
                if(moves[i][0]==2)thirdR++;
                if(moves[i][1]==0)firstC++;
                if(moves[i][1]==1)secondC++;
                if(moves[i][1]==2)thirdC++;
                if(moves[i][0]==moves[i][1])dOne++;
                if((moves[i][0]==0 && moves[i][1]==2) || (moves[i][0]==1 && moves[i][1]==1) || (moves[i][0]==2 && moves[i][1]==0))dTwo++;
        
            }
            if(firstR==3 || secondR==3 || thirdR==3 || firstC==3 || secondC==3 || thirdC==3 || dOne==3 || dTwo==3)return "B";
        }
        if(moves.length==9)return "Draw";
        return "Pending";
    }
}