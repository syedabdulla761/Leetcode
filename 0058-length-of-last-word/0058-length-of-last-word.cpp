class Solution {
public:
    int lengthOfLastWord(string s) {
        int si=0,c;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
                si++;
            if(s[i]==' ')
            {
                c=1;
            }
            if(c==1 && s[i]!=' '){
                c=0;
                si=1;
            }  
        }
        return si;
    }
};