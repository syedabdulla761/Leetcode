class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('c');
        cout<<st.top();
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else if(!s.empty() && (s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{'))
            {   
                st.pop();
            }
            else
                st.push(s[i]);
        }
        cout<<st.top();
        if(st.size()==1)
               return true;
        return false;
    }
};