class Solution {
    public boolean judgeCircle(String moves) {
       int countR = 0, countL = 0, countU = 0, countD = 0;

        for (char c : moves.toCharArray()) {
            if (c == 'R') {
                countR++;
            } else if (c == 'L') {
                countL++;
            } else if (c == 'U') {
                countU++;
            } else if (c == 'D') {
                countD++;
            }
        }

        return countR == countL && countU == countD;   
    }
}