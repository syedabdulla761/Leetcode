class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> x;
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1])
                x.push_back(nums[i]);
        }
        x.push_back(nums[nums.size()-1]);
        nums=x;
        return x.size();
    }
};