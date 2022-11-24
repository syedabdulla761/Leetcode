class Solution {
public:
    bool isValid(string s) {
         stack<char> x;
        x.push('c');
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                x.push(s[i]);
            else if(!x.empty() && (s[i]==')' && x.top()=='(') || (s[i]==']' && x.top()=='[') || (s[i]=='}' && x.top()=='{'))
                x.pop();
            else
                x.push(s[i]);
        }
        if(x.size()==1)
            return true;
        return false;
    }
};