class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int tot=nums.size()*(nums.size()+1)/2,su=0;
        return tot-accumulate(nums.begin(),nums.end(),su);
        
    }
};