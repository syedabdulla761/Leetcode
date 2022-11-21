class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> x,y;
        if(ransomNote.size()>magazine.size())
            return false;
        for(int i=0;i<magazine.size();i++){
            if(i<ransomNote.size())
                x[ransomNote[i]]++;
            y[magazine[i]]++;
        }
        cout<<x['b']<<" "<<y['b'];
        for(int i=0;i<ransomNote.size();i++){
            if(x[ransomNote[i]]>y[ransomNote[i]])
                return false;
        }
        
        return true;
    }
};