public class Solution {
    public bool IsPalindrome(int x) {
        String y=x.ToString();
        char[] c=y.ToCharArray();
        Array.Reverse(c);
        String r=new String(c);
        if(y==r)return true;
        return false;
    }
}