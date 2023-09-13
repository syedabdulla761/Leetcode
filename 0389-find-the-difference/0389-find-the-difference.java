class Solution {
    public char findTheDifference(String s, String t) {
        int x=0,y=0;
        for(int i=0;i<s.length();i++){
            x+=s.charAt(i);
        }
        for(int i=0;i<t.length();i++){
            y+=t.charAt(i);
        }
        return (char)Math.abs(x-y);
    }
}