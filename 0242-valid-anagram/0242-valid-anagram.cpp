class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            s[i]=0+s[i];
            t[i]=0+t[i];
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        else
            return false;
    }
};