class Solution {
    public boolean repeatedSubstringPattern(String s) {
        String repeat=s+s;
        return repeat.substring(1,repeat.length()-1).indexOf(s)>=0;
                              }
}
