class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<t.size();i++){
            if(s.find(t[i])<=s.size()){
                s.erase(s.find(t[i]),1);
                t.erase(i,1);
                i--;
            }
            else
                break;
        }
        if(t.size()==0)
            return true;
        else
            return false;
    }
};