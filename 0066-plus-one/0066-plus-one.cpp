class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x=0,y;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9)
            {
                digits[i]++;
                return digits;
            }
            if(digits[i]==9){
                digits[i]=0;
            }
        }
        if(digits[0]==0)
            digits.insert(digits.begin(),1);
        return digits;
    }
};