class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder sb = new StringBuilder();
        int x= word1.length()<word2.length()?word1.length():word2.length();
        for(int i=0;i<x;i++){
            sb.append(word1.charAt(i));
            sb.append(word2.charAt(i));
        }
        word1=word1.length()<word2.length()?word2:word1;
        sb.append(word1.substring(x,word1.length()));
        return sb.toString();
    }
}