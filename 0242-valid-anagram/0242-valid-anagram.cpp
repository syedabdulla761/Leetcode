class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        else
            for(int i=0;i<s.size();i++){
                s[i]=int(s[i]);
                t[i]=int(t[i]);
            }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t?true:false;
    }
};