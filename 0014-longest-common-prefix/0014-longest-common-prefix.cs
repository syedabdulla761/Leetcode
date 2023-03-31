public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        string ans="";
        int i=0;
        for(int j=0;j<strs[0].Length;j++){
            for(i=0;i<strs.Length-1;i++){
                if(j<strs[i].Length && j<strs[i+1].Length && strs[i][j]==strs[i+1][j])continue;
                else break;
            }
            if(i==strs.Length-1)ans+=strs[0][j];
            else break;
        }
        return ans;
    }
}