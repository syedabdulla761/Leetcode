class Solution {
    public char findTheDifference(String s, String t) {
       char result = 0;
       for (int i = 0; i < s.length(); i++) {
         result ^= s.charAt(i) ^ t.charAt(i);
       }
     return (char)(result ^ t.charAt(t.length() - 1));
    }
}