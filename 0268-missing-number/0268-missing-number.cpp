class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tot=nums.size()*(nums.size()+1)/2,su=0;
        return tot-accumulate(nums.begin(),nums.end(),su);
        
    }
};