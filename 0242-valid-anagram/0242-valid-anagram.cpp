class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> x,y;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            x[s[i]]++;
            y[t[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(x[t[i]]!=y[t[i]])
                return false;
        }
        return true;
    }
};