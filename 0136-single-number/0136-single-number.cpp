class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        for(i;i<nums.size();i++){
            if(count(nums.begin(),nums.end(),nums[i])<2)
                break;
        }
        return nums[i];
    }
};