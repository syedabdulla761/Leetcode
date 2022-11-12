class Solution {
public:
    int reverse(int x) {
        string a=to_string(x);
        ::reverse(a.begin(),a.end());
        if(stol(a)>pow(2,31)-1)
            return 0;
        return x>0?stol(a):-stol(a);
    }
};