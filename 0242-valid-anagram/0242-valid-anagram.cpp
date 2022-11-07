class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=0;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            s[i]=x+s[i];
            t[i]=x+t[i];
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return false;
        }
        return true;
    }
};